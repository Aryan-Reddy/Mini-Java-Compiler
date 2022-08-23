import syntaxtree.*;
import visitor.*;

public class Main {
   public static void main(String [] args) {
      try {
         Node root = new MiniJavaParser(System.in).Goal();
         SymbolTable tab = new SymbolTable();
         root.accept(new DepthFirst_symbolTableGen(tab)); // Your assignment part is invoked here.
         root.accept(new GJDepthFirst_typeCheck(tab),null);
         root.accept(new DepthFirst_IRGen(tab),null);
      }
      catch (ParseException e) {
         System.out.println(e.toString());
      }
   }
} 

