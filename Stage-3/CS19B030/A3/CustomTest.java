class CustomTest
{
	public static void main(String[] args)
	{
		System.out.println(new B().newF(((new A().getB(999))).foo3()));
	}
}
class B
{
	public C foo(int x)
	{
		C c;
		c = new C();
		System.out.println(x);
		return c;
	}
	public int foo3()
	{
		return 100;
	}
	public int newF(int x)
	{
		return (x + 20);
	}
}
class C
{
	public int foo2(int x)
	{
		return x;
	}
}
class A
{
	public B getB(int x)
	{
		B b;
		b = new B();
		System.out.println(x);
		return b;
	}
}