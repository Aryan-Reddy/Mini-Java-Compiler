#!/bin/bash

echo "Starting the script"

cd Testcases
cd PublicValid
public_valid_testcases=$(pwd)
cd ../
cd PublicInvalid
public_invalid_testcases=$(pwd)
cd ../
cd PrivateInvalid
private_invalid_testcases=$(pwd)
cd ../
cd PrivateValid 
private_valid_testcases=$(pwd)
cd ../../


touch "Result.csv"
main_dir=$(pwd)

cd Submissions
submissions=$(pwd)
mkdir Unzipped

for FILE in ZipFiles/*; do 
	echo $FILE; unzip $FILE -d Unzipped; 
done

echo "All the files unzipped"

cd Unzipped 
unzipped=$(pwd)

echo "Compiling all the source files"
for d in */ ; do
	cd "$d";
	cd A2;
	mkdir Output ;
	cd Output
	mkdir PublicValid 
	mkdir PublicInvalid  
	mkdir PrivateValid 
	mkdir PrivateInvalid 
	cd ../
	javac A2.java 
	cd "$unzipped"
    echo "$d done" 
done

echo "All source files compiled"

echo "Starting to generate the outputs"

 
for d in */ ; do 
	roll_number=${d%/*}

	echo $roll_number
	cd "$d" ;
	cd A2 ;
	# Public Valid Testcases
	count1=0
	# Public Invalid Testcases 
	count2=0
	# Private Valid Testcases
	count3=0
	# Private Invalid Testcases
	count4=0

	for testcase in $public_valid_testcases/Input/*; do 
		echo $public_valid_testcases/Input
		echo $testcase; 

		file_name=${testcase##*/}
		class_name=${file_name%.*}
		output_filename="$class_name.txt"
		echo $output_filename
		cd Output 
		cd PublicValid 
		touch $output_filename 
		cd ../../ 
		# echo $file_name
		# echo $class_name
		timeout 10s java A2 < $testcase > "Output/PublicValid/$output_filename"
		#now compare the outputs 

		
		diff -q "Output/PublicValid/$output_filename" "$public_valid_testcases/output.txt"
		exit_code=$?
		if (($exit_code == 0)); then
		  	count1=$((count1+1))
		fi

	done 

	
	

	for testcase in $public_invalid_testcases/Input/*; do 
		echo $testcase 

		file_name=${testcase##*/}
		class_name=${file_name%.*}
		output_filename="$class_name.txt"
		cd Output 
		cd PublicInvalid 
		touch $output_filename 
		cd ../../ 

		timeout 10s java A2 < $testcase > Output/PublicInvalid/$output_filename 

		diff -q Output/PublicInvalid/$output_filename $public_invalid_testcases/output.txt 
		exit_code=$?
		if (($exit_code == 0)); then
		  	count2=$((count2+1))
		fi

	done
	

	for testcase in $private_valid_testcases/Input/*; do 
		echo $testcase 

		file_name=${testcase##*/}
		class_name=${file_name%.*}
		output_filename="$class_name.txt"
		cd Output 
		cd PrivateValid 
		touch $output_filename 
		cd ../../ 

		timeout 10s java A2 < $testcase > Output/PrivateValid/$output_filename
		
		diff -w Output/PrivateValid/$output_filename $private_valid_testcases/output.txt
		exit_code=$?
		if (($exit_code == 0)); then
		  	count3=$((count3+1))
		fi

	done

	for testcase in $private_invalid_testcases/Input/*; do 
		echo $testcase 

		file_name=${testcase##*/}
		class_name=${file_name%.*}
		output_filename="$class_name.txt"
		cd Output 
		cd PrivateInvalid 
		touch $output_filename 
		cd ../../ 

		timeout 10s java A2 < $testcase > Output/PrivateInvalid/$output_filename
		
		diff -w Output/PrivateInvalid/$output_filename $private_invalid_testcases/output.txt
		exit_code=$?
		if (($exit_code == 0)); then
		  	count4=$((count4+1))
		fi

	done
	
	cd "$unzipped"

	echo "$roll_number,$count1,$count2,$count3,$count4" >> "$main_dir/Result.csv"

done

echo "All outputs generated for all the students"


