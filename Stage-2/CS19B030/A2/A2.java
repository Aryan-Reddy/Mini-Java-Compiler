import syntaxtree.*;
import visitor.*;

public class A2 {
   public static void main(String [] args) {
      try {
         Node root = new MiniJavaParser(System.in).Goal();
         SymbolTable tab = new SymbolTable();
         root.accept(new DepthFirst_symbolTableGen(tab)); // Your assignment part is invoked here.
         root.accept(new GJDepthFirst_typeCheck(tab),null);
         System.out.println("Program type checked successfully");
      }
      catch (ParseException e) {
         System.out.println(e.toString());
      }
   }
} 

