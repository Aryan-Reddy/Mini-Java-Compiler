class Main {
    public static void main(String[] a) {System.out.println(new A().test()); }
}

class A {
    public boolean test() {
        boolean a;
        boolean b;
        boolean c;
        b = true;
        c = 1;
        a = b && c;
        return a;
    }
}
