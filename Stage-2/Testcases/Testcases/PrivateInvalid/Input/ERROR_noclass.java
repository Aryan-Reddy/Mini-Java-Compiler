// -unused -no-style -offsets
class Main {
  public static void main(String[] a) {System.out.println(new A().foo());}
}

class A extends C {
  public int foo() {
    return 1;
  }
}

class B extends A {
  public int foo() {
    return 2;
  }
}
