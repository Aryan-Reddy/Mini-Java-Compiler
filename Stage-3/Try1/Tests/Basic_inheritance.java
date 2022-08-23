class Main {
    public static void main(String[] a) {System.out.println(new B().foo()); }
}

class A {
    public int test() {
        int a;
        a = 1;
        return a;
    }
}
class B extends A{
    public int foo(){
    int p;
    A a;
    a = new A();
    p = a.test();
    return p;
}
}

