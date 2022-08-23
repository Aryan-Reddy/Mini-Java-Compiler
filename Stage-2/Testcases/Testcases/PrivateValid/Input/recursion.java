// -unused -no-style
class Main {
  public static void main(String[] a) {System.out.println(new A().test2(3,4));}
}

class A {
  int a; // Unused

  public int test(int[] b, int c) { return this.test(b, b[c]); }

  public int test2(int a, int b) { return new A().test2(a - 1, b + a); }
}
