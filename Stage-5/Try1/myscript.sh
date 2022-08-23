cd MiniRA
tests=$(pwd)
cd ../
javac A5.java
for file in $tests/*.miniRA
do
filename="${file##*/}"
filename="${filename%.*}"
java A5 < $file > "./MIPSOut/$filename.s"
java -jar kgi.jar < $file > out1.txt
java -jar Mars4_5.jar nc sm "./MIPSOut/$filename.s" > out2.txt
diff -B out1.txt out2.txt
if [ $? -eq 0 ]
then 
	echo "$file passed"
else 
	echo "$file failed"
fi
done
