cd Tests
tests=$(pwd)
cd ../
javac Main.java
for file in tests/*.java
do
java Main < $file > outMicroIR.microIR
java -jar pgi.jar < outMicroIR.microIR > out1.txt
java $file > out2.txt
cd CheckGrammer
java Main < "../outMicroIR.microIR"
cd ..
cmp -s out1.txt out2.txt
if [ $? -eq 0 ]
then 
	echo "$file passed"
else 
	echo "$file failed"
fi
done
