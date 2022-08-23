import syntaxtree.*;
import visitor.*;

public class Main {
   public static void main(String [] args) {
      
      try {
         Node root = new microIRParser(System.in).Goal();
         GJDepthFirst v=new GJDepthFirst<>();
         root.accept(v,null); // Your assignment part is invoked here.
         System.out.println("HOOOOO");
      }
      catch (ParseException e) {
         System.out.println(e.toString());
      }
   }
} 

