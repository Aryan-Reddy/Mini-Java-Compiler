package visitor;
import java.util.*;
class ClassRecord
{
	int sizeBytes;
	Hashtable<String,Integer> offsetValues;
	public ClassRecord()
	{
		sizeBytes = 0;
		offsetValues = new Hashtable<String,Integer>();
	}
}