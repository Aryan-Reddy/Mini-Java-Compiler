class Main {
    public static void main(String[] a) {System.out.println(new A().foo(3)); }
}

class A {
    public int test() {
        int[] a;
        int b;
        int c;
        b = 5;
        a = new int[b];
        a[0] = 20;
        c = a.length;
        return 1;
    }
    public int foo(int b){
     int a;
     a = this.test();
     return 1;
    
    }
}
