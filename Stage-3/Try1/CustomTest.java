class CustomTest
{
	public static void main(String[] args)
	{
		System.out.println(new A().foo());
	}
}
class B extends C
{
	public int x;
	public B()
	{
		x = 0;
	}
}
class C
{
	public int x;
	public C()
	{
		x = 1;
	}
}
class A
{
	public int foo()
	{
		C b;
		b = new B();
		return b.x;
	}
}