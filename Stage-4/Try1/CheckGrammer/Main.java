import syntaxtree.*;
import visitor.*;

public class Main {
   public static void main(String [] args) {
      try {
         Node root = new MiniRAParser(System.in).Goal();
         root.accept(new GJDepthFirst(),null);
         System.out.println("Parsed Successfully");
      }
      catch (ParseException e) {
         System.out.println(e.toString());
      }
   }
} 

