class Main {
    public static void main(String[] a) {System.out.println(new B().foo()); }
}

class A {
    public int test() {
        boolean a;
        a = true;
        return 1;
    }
}
class B{
    public int foo(){
    int p;
    A a;
    a = new A();
    p = a.test();
    return 1;
}
}

