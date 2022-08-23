import syntaxtree.*;
import visitor.*;
public class Main {
   public static void main(String [] args) {
      try {
         SymbolTable2 tab = new SymbolTable2();
         Node root = new microIRParser(System.in).Goal();
         root.accept(new GJDepthFirst_symbTabGen(tab,18,8),null);
         //tab.print();
         root.accept(new GJDepthFirst_printRA(tab,18,8),null);
      }
      catch (ParseException e) {
         System.out.println(e.toString());
      }
   }
} 

