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
class B{
    public boolean foo(){
    boolean p;
    C a;
    a = new A();
    p = a.test();
    return p;
}
}

