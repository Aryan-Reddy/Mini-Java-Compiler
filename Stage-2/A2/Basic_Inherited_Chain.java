class Main {
    public static void main(String[] a) {System.out.println(new B().foo()); }
}

class A {
    public boolean test() {
        boolean a;
        a = true;
        return a;
    }
}
class B extends A{
    public boolean foo(){
    boolean p;
    A a;
    a = new A();
    p = a.test();
    return p;
}
}
class C extends B{
    public boolean foo(){
    boolean p;
    A a;
    a = new A();
    p = a.test();
    return p;
}
}

class D extends C{
    public boolean foo(){
    boolean p;
    A a;
    a = new A();
    p = a.test();
    return p;
}
}

