class Main {
    public static void main(String[] a) {System.out.println(new A().test()); }
}

class A {
    public boolean test() {
        boolean a;
        boolean b;
        int c;
        b = true;
        c = false;
        a = b || c;
        return a;
    }
}
