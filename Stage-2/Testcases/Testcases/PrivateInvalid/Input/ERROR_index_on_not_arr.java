// -unused -no-style
class Main {
  public static void main(String[] a) { System.out.println(new A().foo());}
}

class A {
  int a;

  public int test(int b) { return b[2]; }

  public int foo() { return a[2]; }
}
