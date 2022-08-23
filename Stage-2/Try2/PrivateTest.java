class PrivateTest{
    public static void main(String[] a){
        System.out.println(1);
    }
}

class C {
    protected int fun(int num){
        int num_aux ;
        PrivateTest p;
        p = new PrivateTest();
        num_aux = (num * num) ; 
        return num_aux ;
    }
}
class A extends C {
    public int f(int num)
    {
        int x;
        A a;
        a = new A();
        Z c;
        c = new C();
        boolean f;
        f = (a != c);
        a = new A();
        x = a.fun(1);
        return 0;
    }
}
class Z
{

}
class B extends A {
    protected int funx(int num){
        int x;
        int k;
        x = 1;
        return 1;
    }
}