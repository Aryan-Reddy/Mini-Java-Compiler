import java.util.*;
class LearnJava
{
	public static void main(String args[])
	{
		String s = null;
		System.out.println(s.equals("Hello"));
/*		LinearScan test = new LinearScan(3);
		TreeSet<Integer> em = new TreeSet<Integer>();
		TreeSet<Integer> d = new TreeSet<Integer>();
		TreeSet<Integer> nwD = new TreeSet<Integer>();
		TreeSet<Integer> nwD2 = new TreeSet<Integer>();
		d.add(1);
		d.add(2);
		d.add(3);
		nwD.add(4);
		nwD2.add(5);
		test.addV(em,d);
		test.addV(em,em);
		test.addV(em,em);
		test.addV(em,nwD);
		test.addV(d,em);
		test.addV(em,nwD2);
		test.addV(nwD2,em);
		test.addV(em,em);
		test.addV(em,nwD);
		test.addV(em,em);
		test.addE(0,1);
		test.addE(1,2);
		test.addE(2,3);
		test.addE(3,4);
		test.addE(4,5);
		test.addE(5,6);
		test.addE(6,7);
		test.addE(7,8);
		test.addE(8,9);
		System.out.println(test.getAllocation());*/
	}
}
   class Interval
   {
    public int left;
    public int right;
    public int varId;
    public void print()
    {
    	System.out.println("{" + varId + " = (" + left + "," + right + ") }");
    }
   }
   class LinearScan
   {
    Vector< Vector<Integer> > adjList;
    Vector<TreeSet<Integer>> used;
    Vector<TreeSet<Integer>> defd;
    TreeMap<Integer,Interval> intervals;
    int registerCount;
    public LinearScan(int regCnt)
    {
      adjList = new Vector<Vector<Integer>> ();
      used = new Vector<TreeSet<Integer>>();
      defd = new Vector<TreeSet<Integer>>();
      //add EntryNode
      Vector<Integer> nw = new Vector<Integer>();
      adjList.addElement(nw);
      TreeSet<Integer> u = new TreeSet<Integer> ();
      TreeSet<Integer> v = new TreeSet<Integer>();
      used.addElement(u);
      defd.addElement(v);
      registerCount = regCnt;
    }
    public void addV(TreeSet<Integer> u,TreeSet<Integer> d)
    {
      Vector<Integer> nw = new Vector<Integer>();
      adjList.addElement(nw);
      used.addElement(u);
      defd.addElement(d);
    }
    public void addE(int a,int b)
    {
      adjList.get(a).addElement(b);
    }
    public void makeIntervals()
    {
      intervals = new TreeMap<Integer,Interval>();
      int n = adjList.size();
      if(n < 2)
      {
        System.out.println("ERROR:NO EXIT NODE");
        System.exit(0);
      }
      Vector<TreeSet<Integer>> in = new Vector<TreeSet<Integer>>();
      Vector<TreeSet<Integer>> out = new Vector<TreeSet<Integer>>();
      for(int i = 0;i < n;i++) 
      {
        in.addElement(new TreeSet<Integer>());
        out.addElement(new TreeSet<Integer>());
      }
      Boolean hasChanged = true;
      while(hasChanged)
      {
        hasChanged = false;
        for(int i = n-2;i >= 0;i--)
        {
          TreeSet<Integer> nwOut = out.get(i);
          nwOut.clear();
          for(int j:adjList.get(i))
          {
            nwOut.addAll(in.get(j));
          }
          TreeSet<Integer> curIn = new TreeSet<Integer>();
          curIn.addAll(used.get(i));
          TreeSet<Integer> def = defd.get(i);
          for(int x:nwOut)
          {
            if(!def.contains(x))
            {
              curIn.add(x);
            }
          }
          TreeSet<Integer> oldIn = in.get(i);
          if(!curIn.equals(oldIn))
          {
            hasChanged = true;
            in.set(i,curIn);
          }
        }
      }
      for(int i = 0;i < n;i++)
      {
        TreeSet<Integer> allLive = new TreeSet<Integer>();
        allLive.addAll(in.get(i));
        allLive.addAll(defd.get(i));
        for(int x:allLive)
        {
           Interval iv = intervals.get(x);
           if(iv == null)
           {
            iv = new Interval();
            iv.left = i;
            iv.right = i;
            iv.varId = x;
            intervals.put(x,iv);
           }
           else
           {
            iv.left = Math.min(iv.left,i);
            iv.right = Math.max(iv.right,i);
           }
        }
      }
    }
    public TreeMap<Integer,Integer> getAllocation()
    {
      makeIntervals();
      TreeMap<Integer,Integer> resAlloc = new TreeMap<Integer,Integer>();
      Vector<Interval> tmpIntv = new Vector<Interval>();
      Set<Integer> st = intervals.keySet();
      //System.out.println("Intervals:" );
      for(int m:st)
      {
      	Interval e = intervals.get(m);
        tmpIntv.addElement(e);
        //e.print();
      }
      class MyCompar implements Comparator<Interval>
      {
        public int compare(Interval a,Interval b)
        {
          if(a.left < b.left) return -1;
          if(a.left > b.left) return 1;
          if(a.right < b.right) return -1;
          if(a.right > b.right) return 1;
          return 0;
        }
      }
      MyCompar compar = new MyCompar();
      class MyCompar2 implements Comparator<Interval>
      {
        public int compare(Interval a,Interval b)
        {
          if(a.right < b.right) return -1;
          if(a.right > b.right) return 1;
          if(a.varId < b.varId) return -1;
          if(a.varId > b.varId) return 1;
          return 0;
        }
      }
      Collections.sort(tmpIntv,compar);
      TreeSet<Interval> activeSet = new TreeSet<Interval>(new MyCompar2());
      int sz = tmpIntv.size();
      Vector<Integer> freeRegisters = new Vector<Integer>();
      for(int i = 0;i < registerCount;i++)
      {
        freeRegisters.addElement(i);
      }
      class SpillCnt
      {
        public Integer spillCounter;
        public SpillCnt()
        {
          spillCounter = registerCount;
        }
      }
      SpillCnt spillCounter = new SpillCnt();
      class TempMethods
      {
        public void expireOldIntervals(int i)
        {
          Interval a = tmpIntv.get(i);
          while(true)
          {
            if(activeSet.isEmpty()) break;
            Interval c = activeSet.first();
            if(c.right >= a.left) return;
            activeSet.remove(c);
            freeRegisters.addElement(resAlloc.get(c.varId));
          }
        }
        public void spillAtInterval(int i)
        {
          Interval c  = activeSet.last();
          Interval a = tmpIntv.get(i);
          if(c.right > a.right)
          {
            int r = resAlloc.get(c.varId);
            resAlloc.put(a.varId,r);
            resAlloc.put(c.varId,spillCounter.spillCounter);
            spillCounter.spillCounter++;
            activeSet.remove(c);
            activeSet.add(a);
          }
          else
          {
            resAlloc.put(a.varId,spillCounter.spillCounter);
            spillCounter.spillCounter++;
          }
        }
      }
      TempMethods tmp = new TempMethods();
      for(int i = 0;i < sz;i++)
      {
      	//tmpIntv.get(i).print();
        tmp.expireOldIntervals(i);
        //System.out.println("size: " + activeSet.size());
        if(activeSet.size()==registerCount)
        {
          tmp.spillAtInterval(i);
        }
        else
        {
          int r = freeRegisters.lastElement();
          //System.out.println("Allocated Register: "+ r);
          freeRegisters.remove(freeRegisters.size()-1);
          Interval a = tmpIntv.get(i);
          resAlloc.put(a.varId,r);
          activeSet.add(a);
        }
      }
      return resAlloc;
    }
   }