class Main {
    public static void main(String[] a) {System.out.println(new A().test()); }
}

class A {
    public int test() {
        int[] a;
        boolean b;
        b = true;
        a = new int[b];
        a[0] = 20;
        return 1;
    }
}
