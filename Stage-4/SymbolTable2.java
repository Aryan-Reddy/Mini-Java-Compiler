package visitor;
import java.util.*;
public class SymbolTable2
{
	Hashtable<String,TreeMap<Integer,Integer>> procedToAlloc;
	public SymbolTable2()
	{
		procedToAlloc = new Hashtable<String,TreeMap<Integer,Integer>>();
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
		Set<String> kst = procedToAlloc.keySet();
		for(String k:kst)
		{
			TreeMap<Integer,Integer> m = procedToAlloc.get(k);
			System.out.println(k + ": ");
			System.out.println(m);
		}
	}
}