class Main {
  public static void main(String[] a) { System.out.println(new A().foo());}
}

class A {
  public boolean foo() {
    int[] a;
    boolean b;
    b = a[true];
    return true;
  }
}
