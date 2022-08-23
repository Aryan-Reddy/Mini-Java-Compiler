class Main {
    public static void main(String[] a) {System.out.println(new A().test()); }
}

class A {
    public int test() {
        boolean a;
        boolean b;
        boolean c;
        b = true;
        c = false;
        a = b && c;
        return 1;
    }
}
