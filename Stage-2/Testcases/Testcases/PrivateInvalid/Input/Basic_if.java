class Main {
    public static void main(String[] a) {System.out.println(new A().test()); }
}

class A {
    public int test() {
        int b;
        int c;
        int a;
        b = 2;
        c = 3;
        if(c){a = b;}
        else {a = c;}
        return 1;
    }
}
