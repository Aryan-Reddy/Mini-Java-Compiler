// -unused -no-style
class Main {
  public static void main(String[] a) { System.out.println(new A().test());}
}

class A {
  public int test() {
    B b;
    C c;
    c = b;
    return 1;
  }

  public int test2(C c) { return 2; }

  public int test3() {
    B b;
    return this.test2(b);
  }
}

class B {}

class C extends B {}
