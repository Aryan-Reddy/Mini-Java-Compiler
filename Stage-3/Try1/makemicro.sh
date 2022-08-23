java -ea Main < "$1" > outMicroIR.microIR
java -jar pgi.jar < outMicroIR.microIR