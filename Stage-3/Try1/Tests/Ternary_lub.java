class Main {
    public static void main(String[] a) {System.out.println(new test().foo()); }
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
class C extends B{
    public int foo(){
    int p;
    A a;
    a = new A();
    p = a.test();
    return p;
}
}

class D extends B{
    public int foo(){
    int p;
    A a;
    a = new A();
    p = a.test();
    return p;
}
}
class test{
    public int foo(){
    A a;
    B b;
    C c;
    D d;
    a = new A();
    b = new B();
    c = new C();
    d = new D();
    a = true? c : d;
    b = false? c : d;
    return 1;
}
}

