package visitor;
import java.util.*;
public class SymbolTable2
{
	Hashtable<String,TreeMap<Integer,Integer>> procedToAlloc;
	public Hashtable<String,Vector<Integer>> proc3ints;
	public Hashtable<String,Boolean> spillInfo;
	public SymbolTable2()
	{
		procedToAlloc = new Hashtable<String,TreeMap<Integer,Integer>>();
		proc3ints = new Hashtable<String,Vector<Integer>> ();
		spillInfo = new Hashtable<String,Boolean>();
	}
	public void putMap(String proc,TreeMap<Integer,Integer> alloc)
	{
		procedToAlloc.put(proc,alloc);
	}
	public TreeMap<Integer,Integer> getMap(String proc)
	{
		return procedToAlloc.get(proc);
	}
	public void print()
	{
		System.out.println("Allocation: ");
		Set<String> kst = procedToAlloc.keySet();
		for(String k:kst)
		{
			TreeMap<Integer,Integer> m = procedToAlloc.get(k);
			System.out.println(k + ": ");
			System.out.println(m);
		}
		System.out.println("Proc3ints: ");
		for(String k:kst)
		{
			System.out.println(k + ": ");
			System.out.println(proc3ints.get(k));			
		}
	}
}