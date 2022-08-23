bison -d A1.y
flex A1.l
gcc A1.tab.c lex.yy.c -lfl -o A1
for file in ./MacroJava/*.java
do
	name=${file##*/}
	dest="./GenMini/$name"
	./A1 < $file > $dest
	javac $dest
	if [ $? -eq 0 ]
	then
		echo "Successfully compiled $name to $dest"
	else
		echo "Failed $file"
	fi
	dest2="./MiniJava/$name"
	javac $dest2
	if [ $? -eq 0 ]
	then
		echo "Successfully compiled $name to $dest2"
	else
		echo "Failed $file"
	fi
done
for file in ./MiniJava/*.java
do
	name=${file##*/}
	base=${name%.java}
	echo $base
	dest1="./GenMini"
	dest2="./MiniJava"
	java -cp $dest1 $base > out1.txt
	java -cp $dest2 $base > out2.txt
	cmp -s out1.txt out2.txt
	if [ $? -eq 0 ]
	then
		echo "Passed"
	else
		echo $name " Different"
	fi
done