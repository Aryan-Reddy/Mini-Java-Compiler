class Main {
    public static void main(String[] a) {System.out.println(new A().test()); }
}

class A {
    public int test() {
        int[] a;
        int b;
        int c;
        b = 5;
        a = new int[b];
        a[0] = 20;
        c = a[0];
        return 1;
    }
}
