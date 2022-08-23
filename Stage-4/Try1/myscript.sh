cd MicroIR
tests=$(pwd)
cd ../
javac Main.java
for file in $tests/*.microIR
do
filename="${file##*/}"
filename="${filename%.*}"
java Main < $file > "./MiniRA2/$filename.miniRA"
java -jar pgi.jar < $file > out1.txt
cd CheckGrammer
java Main < "../MiniRA2/$filename.miniRA"
cd ..
java -jar kgi.jar < "./MiniRA2/$filename.miniRA" > out2.txt
cmp -s out1.txt out2.txt
if [ $? -eq 0 ]
then 
	echo "$file passed"
else 
	echo "$file failed"
fi
done
