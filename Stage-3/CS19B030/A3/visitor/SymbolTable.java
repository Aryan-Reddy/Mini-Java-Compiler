package visitor;
import java.util.*;
public class SymbolTable
{
	private Hashtable<String,Env> classToEnvTab;
	private Hashtable<String,Boolean> classImplemented;
	public Hashtable<String,Integer> classIndex;
	public Vector<Vector<Integer>> classAdjList;
	public ClassRecord[] records;
	public String[] classNames;
	public Hashtable<Integer,String> msgSendLabel;
	public SymbolTable()
	{
		classToEnvTab = new Hashtable<String,Env>();
		classImplemented = new Hashtable<String,Boolean>();
		classIndex = new Hashtable<String,Integer> ();
		classAdjList = new Vector<Vector<Integer>>();
		msgSendLabel = new Hashtable<Integer,String> ();
	}
	public Env insertNewClassScope(String c)
	{
		Env e = (Env) classToEnvTab.get(c);
		if(e == null)
		{
			Env nw = new Env(null,c);
			classToEnvTab.put(c,nw);
			classImplemented.put(c,true);
			return nw;
		}
		Boolean f = classImplemented.get(c);
		if(f != null) return null;
		classImplemented.put(c,true);
		return e;
	}
	public Env insertNewClassScope(String c,String cpar)
	{
		Env e = (Env) classToEnvTab.get(c);
		Env p = (Env) classToEnvTab.get(cpar);
		if(p == null)
		{
			p = new Env(null,cpar);
			classToEnvTab.put(cpar,p);
		}
		if(e == null)
		{
			Env nw = new Env(p,c);
			classToEnvTab.put(c,nw);
			classImplemented.put(c,true);
			return nw;
		}
		Boolean f = classImplemented.get(c);
		if(f == null)
		{
			classImplemented.put(c,true);
			e.parent = p;
			return e;
		}
		return null;		
	}
	public Env getClassEnv(String c)
	{
		Env e = (Env) classToEnvTab.get(c);
		if(e == null) return null;
		return e;
	}
}