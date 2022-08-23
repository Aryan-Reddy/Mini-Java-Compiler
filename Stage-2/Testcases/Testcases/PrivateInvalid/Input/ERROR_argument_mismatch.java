// -unused -no-style
class Main {
    public static void main(String[] a) {System.out.println(new B().b(true));
    }
}

class C {
    int a;
}

class A {
    int[] r;
}

class B {
    public int b(int a) {
        return 1;
    }
}

// A lot of errors in this are useless, but some are important
// and uncover some important error recovery, like in `class boolean`
