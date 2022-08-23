package visitor;
import java.util.*;
public class Env
{
	class MethodAttr
	{
		public String[] args;
		public Env env;
		public int accessType;
		public MethodAttr(String[] argU,Env e,int acT)
		{
			args = argU;
			env = e;
			accessType = acT;
		}
	}
	private Hashtable<String,String> idTypeTable;
	private Hashtable<String,MethodAttr> methodTable;
	protected Env parent;
	public String className;
	public Env(Env p,String c)
	{
		idTypeTable = new Hashtable<String,String>();
		methodTable = new Hashtable<String,MethodAttr>();
		parent = p;
		className = c;
	}
	public Env getParent()
	{
		return this.parent;
	}
	public Boolean putId(String s,String t)
	{
		String x = idTypeTable.get(s);
		if(x != null) return false;
		idTypeTable.put(s,t);
		return true;
	}
	public String getIDType(String s)
	{
		Env curEnv = this;
		while(curEnv != null)
		{
			String poss = (String) curEnv.idTypeTable.get(s);
			if(poss != null) return poss;
			curEnv = curEnv.parent;
		}
		return null;
	}
	public ArrayList<Object> getMethodArgAccType(String s)
	{
		Env curEnv = this;
		while(curEnv != null)
		{
			MethodAttr mthd = curEnv.methodTable.get(s);
			if(mthd != null) 
			{
				ArrayList<Object> ret = new ArrayList<Object>();
				ret.add(mthd.args);
				ret.add(mthd.accessType);
				return ret;
			}
			curEnv = curEnv.parent;
		}
		return null;
	}
	public Env addMethod(String m,String[] argTypes,int acT) //acT == 0 -> public, acT == 1 -> protected, acT == 2 -> private
	{
		MethodAttr mthd = methodTable.get(m);
		if(mthd != null) return null;
		Env e;
		e = new Env(this,null);
		methodTable.put(m,new MethodAttr(argTypes,e,acT));
		return e;
	}
	public Env getMethodEnv(String m)
	{
		Env curEnv = this;
		while(curEnv != null)
		{
			MethodAttr mthd = methodTable.get(m);
			if(mthd != null) return mthd.env;
			curEnv = curEnv.parent;
		}
		return null;
	}
	public Boolean checkMthdImmediate(String m)
	{
		if(methodTable.get(m)!=null) return true;
		return false;
	}
	public Boolean isSubType(Env t)
	{
		Env curEnv = this;
		while(curEnv != null)
		{
			if(curEnv == t) return true;
			curEnv = curEnv.parent;
		}
		return false;
	}
}