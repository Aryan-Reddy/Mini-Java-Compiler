class Main {
    public static void main(String[] a) {System.out.println(new A().test()); }
}

class A {
    public boolean test() {
        int a;
        a = 1 != 1;
        return a;
    }
}
