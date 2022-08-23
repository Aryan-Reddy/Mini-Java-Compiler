//
// Generated by JTB 1.3.2
//

package visitor;
import syntaxtree.*;
import java.util.*;

/**
 * Provides default methods which visit each node in the tree in depth-first
 * order.  Your visitors may extend this class.
 */
public class GJDepthFirst<R,A> implements GJVisitor<R,A> {
   //
   // Auto class visitors--probably don't need to be overridden.
   //
  int curExtraArgs = 0;
  int totSlotSpace = 0;
   public R visit(NodeList n, A argu) {
      R _ret=null;
      int _count=0;
      for ( Enumeration<Node> e = n.elements(); e.hasMoreElements(); ) {
         e.nextElement().accept(this,argu);
         _count++;
      }
      return _ret;
   }

   public R visit(NodeListOptional n, A argu) {
      if ( n.present() ) {
         R _ret=null;
         int _count=0;
         for ( Enumeration<Node> e = n.elements(); e.hasMoreElements(); ) {
            e.nextElement().accept(this,argu);
            _count++;
         }
         return _ret;
      }
      else
         return null;
   }

   public R visit(NodeOptional n, A argu) {
      if ( n.present() )
         return n.node.accept(this,argu);
      else
         return null;
   }

   public R visit(NodeSequence n, A argu) {
      R _ret=null;
      int _count=0;
      for ( Enumeration<Node> e = n.elements(); e.hasMoreElements(); ) {
         e.nextElement().accept(this,argu);
         _count++;
      }
      return _ret;
   }

   public R visit(NodeToken n, A argu) { return (R)n.tokenImage; }

   //
   // User-generated visitor methods below
   //

   /**
    * f0 -> "MAIN"
    * f1 -> "["
    * f2 -> IntegerLiteral()
    * f3 -> "]"
    * f4 -> "["
    * f5 -> IntegerLiteral()
    * f6 -> "]"
    * f7 -> "["
    * f8 -> IntegerLiteral()
    * f9 -> "]"
    * f10 -> StmtList()
    * f11 -> "END"
    * f12 -> ( SpillInfo() )?
    * f13 -> ( Procedure() )*
    * f14 -> <EOF>
    */
   public R visit(Goal n, A argu) {
      R _ret=null;
      n.f0.accept(this, null);
      String lab = "main";
      n.f1.accept(this, argu);
      String tmp1 = (String) n.f2.accept(this, argu);
      n.f3.accept(this, argu);
      n.f4.accept(this, argu);
      String tmp2 = (String) n.f5.accept(this, argu);
      n.f6.accept(this, argu);
      n.f7.accept(this, argu);
      String tmp3 = (String) n.f8.accept(this, argu);
      Integer num1 = Integer.valueOf(tmp1);
      Integer num2 = Integer.valueOf(tmp2);
      Integer num3 = Integer.valueOf(tmp3);
      curExtraArgs = Math.max(num1-4,0);
      totSlotSpace = num2 * 4;
      n.f9.accept(this, argu);
      System.out.println(lab + ": ");
      System.out.println("sw $fp, -8($sp)");
      System.out.println("move $fp, $sp");
      System.out.println("sw $ra, -4($sp)");
      System.out.println("subu $sp, $sp, " + totSlotSpace);
      n.f10.accept(this, argu);
      System.out.println("addu $sp, $sp, " + totSlotSpace);
      System.out.println("lw $ra, -4($fp)");
      System.out.println("lw $fp, -8($fp)");
      n.f11.accept(this, argu);
      n.f12.accept(this, argu);
      System.out.println("jal _exitret");
      n.f13.accept(this, argu);
      n.f14.accept(this, argu);
      System.out.println("_halloc:");
      System.out.println("li $v0, 9");
      System.out.println("syscall");
      System.out.println("j $ra");
      System.out.println(".text");
      System.out.println(".global _print");
      System.out.println("_print:");
      System.out.println("li $v0, 1");
      System.out.println("syscall");
      System.out.println("la $a0, newl");
      System.out.println("li $v0, 4");
      System.out.println("syscall");
      System.out.println("j $ra");
      System.out.println(".data");
      System.out.println(".align 0");
      System.out.println("_exitret: ");
      System.out.println("li $v0, 10");
      System.out.println("syscall");
      System.out.println(".data");
      System.out.println(".align 0");
      System.out.println("newl: .asciiz " + '"' + (char)(92) + "n" + '"');
      System.out.println(".data");
      System.out.println(".align 0");      
      System.out.println("str_er:  .asciiz " +'"' +  " ERROR: abnormal termination\n");
      return _ret;
   }

   /**
    * f0 -> ( ( Label() )? Stmt() )*
    */
   public R visit(StmtList n, A argu) {
      R _ret=null;
      String fromStmt = "fromStmt";
      n.f0.accept(this, (A) fromStmt);
      return _ret;
   }

   /**
    * f0 -> Label()
    * f1 -> "["
    * f2 -> IntegerLiteral()
    * f3 -> "]"
    * f4 -> "["
    * f5 -> IntegerLiteral()
    * f6 -> "]"
    * f7 -> "["
    * f8 -> IntegerLiteral()
    * f9 -> "]"
    * f10 -> StmtList()
    * f11 -> "END"
    * f12 -> ( SpillInfo() )?
    */
   public R visit(Procedure n, A argu) {
      R _ret=null;
      String lab = (String) n.f0.accept(this, null);
      n.f1.accept(this, argu);
      String tmp1 = (String) n.f2.accept(this, argu);
      n.f3.accept(this, argu);
      n.f4.accept(this, argu);
      String tmp2 = (String) n.f5.accept(this, argu);
      n.f6.accept(this, argu);
      n.f7.accept(this, argu);
      String tmp3 = (String) n.f8.accept(this, argu);
      Integer num1 = Integer.valueOf(tmp1);
      Integer num2 = Integer.valueOf(tmp2);
      Integer num3 = Integer.valueOf(tmp3);
      curExtraArgs = Math.max(num1-4,0);
      totSlotSpace = num2 * 4;
      n.f9.accept(this, argu);
      System.out.println(lab + ": ");
      System.out.println("sw $fp, -8($sp)");
      System.out.println("move $fp, $sp");
      System.out.println("sw $ra, -4($sp)");
      System.out.println("subu $sp, $sp, " + totSlotSpace);
      n.f10.accept(this, argu);
      System.out.println("addu $sp, $sp, " + totSlotSpace);
      System.out.println("lw $ra, -4($fp)");
      System.out.println("lw $fp, -8($fp)");
      n.f11.accept(this, argu);
      n.f12.accept(this, argu);
      System.out.println("jr $ra");
      return _ret;
   }

   /**
    * f0 -> NoOpStmt()
    *       | ErrorStmt()
    *       | CJumpStmt()
    *       | JumpStmt()
    *       | HStoreStmt()
    *       | HLoadStmt()
    *       | MoveStmt()
    *       | PrintStmt()
    *       | ALoadStmt()
    *       | AStoreStmt()
    *       | PassArgStmt()
    *       | CallStmt()
    */
   public R visit(Stmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, null);
      return _ret;
   }

   /**
    * f0 -> "NOOP"
    */
   public R visit(NoOpStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      System.out.println("nop");
      return _ret;
   }

   /**
    * f0 -> "ERROR"
    */
   public R visit(ErrorStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      System.out.println("li $v0, 4");
      System.out.println("la $a0, str_er");
      System.out.println("syscall");
      System.out.println("li $v0, 10");
      System.out.println("syscall");
      return _ret;
   }


   /**
    * f0 -> "CJUMP"
    * f1 -> Reg()
    * f2 -> Label()
    */
   public R visit(CJumpStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String reg = (String) n.f1.accept(this, argu);
      String lab = (String) n.f2.accept(this, argu);
      System.out.println("beqz " + reg + ", " + lab);
      return _ret;
   }

   /**
    * f0 -> "JUMP"
    * f1 -> Label()
    */
   public R visit(JumpStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String lab = (String) n.f1.accept(this, argu);
      System.out.println("j " + lab);
      return _ret;
   }

   /**
    * f0 -> "HSTORE"
    * f1 -> Reg()
    * f2 -> IntegerLiteral()
    * f3 -> Reg()
    */
   public R visit(HStoreStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String reg1 = (String) n.f1.accept(this, argu);
      String imm = (String) n.f2.accept(this, argu);
      String reg2 = (String) n.f3.accept(this, argu);
      System.out.println("sw " + reg1 + ", " + imm + "(" + reg2 + ")");
      return _ret;
   }

   /**
    * f0 -> "HLOAD"
    * f1 -> Reg()
    * f2 -> Reg()
    * f3 -> IntegerLiteral()
    */
   public R visit(HLoadStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String reg1 = (String) n.f1.accept(this, argu);
      String imm = (String) n.f2.accept(this, argu);
      String reg2 = (String) n.f3.accept(this, argu);
      System.out.println("lw " + reg1 + ", " + imm + "(" + reg2 + ")");
      return _ret;
   }

   /**
    * f0 -> "MOVE"
    * f1 -> Reg()
    * f2 -> Exp()
    */
   public R visit(MoveStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String reg = (String) n.f1.accept(this, argu);
      n.f2.accept(this, (A) reg);
      return _ret;
   }

   /**
    * f0 -> "PRINT"
    * f1 -> SimpleExp()
    */
   public R visit(PrintStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String tmp = (String) n.f1.accept(this, argu);
      int t = n.f1.f0.which;
      if(t==0)
      {
        //reg
        if(!tmp.equals("$a0"))
        System.out.println("move $a0, " + tmp);
      }
      else if(t==1)
      {
        //integer
        System.out.println("li $a0, " + tmp);
      }
      else if(t==2)
      {
        System.out.println("la $a0, " + tmp);
      }
      else{}
      System.out.println("jal _print");
      return _ret;
   }

   /**
    * f0 -> "ALOAD"
    * f1 -> Reg()
    * f2 -> SpilledArg()
    */
   public R visit(ALoadStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String reg = (String) n.f1.accept(this, argu);
      String tmp = (String) n.f2.accept(this, argu);
      Integer num = Integer.valueOf(tmp);
      num = num * 4 + 8;
      System.out.println("lw " + reg + ", " + (totSlotSpace - num) + "($sp)");
      return _ret;
   }

   /**
    * f0 -> "ASTORE"
    * f1 -> SpilledArg()
    * f2 -> Reg()
    */
   public R visit(AStoreStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String tmp = (String) n.f1.accept(this, argu);
      String reg = (String) n.f2.accept(this, argu);
      Integer num = Integer.valueOf(tmp);
      num = num * 4 + 8;
      System.out.println("sw " + reg + ", " + (totSlotSpace - num) + "($sp)");
      return _ret;
   }

   /**
    * f0 -> "PASSARG"
    * f1 -> IntegerLiteral()
    * f2 -> Reg()
    */
   public R visit(PassArgStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String tmp = (String) n.f1.accept(this, argu);
      Integer num = Integer.valueOf(tmp);
      String reg = (String) n.f2.accept(this, argu);
      System.out.println("sw " + reg + ", " + (-(num+1) * 4) + "($sp)");
      return _ret;
   }

   /**
    * f0 -> "CALL"
    * f1 -> SimpleExp()
    */
   public R visit(CallStmt n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String tmp = (String) n.f1.accept(this, null);
      int tst = n.f1.f0.which;
      if(tst == 0)
      {
        System.out.println("jalr " + tmp);
      }
      else if(tst == 1)
      {
        System.out.println("li $v0, " + tmp);
        System.out.println("jalr $v0");
      }
      else if(tst == 2)
      {
        System.out.println("jal " + tmp);
      }
      else {}
      return _ret;
   }

   /**
    * f0 -> HAllocate()
    *       | BinOp()
    *       | SimpleExp()
    */
   public R visit(Exp n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      return _ret;
   }

   /**
    * f0 -> "HALLOCATE"
    * f1 -> SimpleExp()
    */
   public R visit(HAllocate n, A argu) {
      R _ret=null;
      if(argu==null)
      {
        System.out.println("Error Msg For debug1");
        System.exit(0);
      }
      String arg = (String) argu;
      n.f0.accept(this, argu);
      String reg = "$a0";
      n.f1.accept(this, (A) reg);
      System.out.println("jal _halloc");
      if(!arg.equals("v0"))
      System.out.println("move " + arg + ", $v0");
      return _ret;
   }

   /**
    * f0 -> Operator()
    * f1 -> Reg()
    * f2 -> SimpleExp()
    */
   public R visit(BinOp n, A argu) {
      R _ret=null;
      if(argu==null)
      {
        System.out.println("Error Msg For debug2");
        System.exit(0);
      }
      String arg = (String) argu;
      n.f0.accept(this, argu);
      String reg = (String) n.f1.accept(this, argu);
      String smpExp = (String) n.f2.accept(this, null);
      int tst = n.f0.f0.which;
      int tst2 = n.f2.f0.which;
      if(tst == 0)
      {
        if(tst2 == 0 || tst2 == 1)
        {
          System.out.println("sle " + arg + ", " + reg + ", " + smpExp);
        }
        else if(tst2 == 2)
        {
          System.out.println("la $v0, " + smpExp);
          System.out.println("sle " + arg + ", " + reg + ", $v0");
        }
        else{}
      }
      else if(tst == 1)
      {
        if(tst2 == 0 || tst2 == 1)
        {
          System.out.println("sne " + arg + ", " + reg + ", " + smpExp);
        }
        else if(tst2 == 2)
        {
          System.out.println("la $v0, " + smpExp);
          System.out.println("sne " + arg + ", " + reg + ", $v0");
        }
        else{}        
      }
      else if(tst == 2)
      {
        if(tst2 == 0)
        {
          System.out.println("add " + arg + ", " + reg + ", " + smpExp);
        }
        else if(tst2 == 1)
        {
          System.out.println("addi " + arg + ", " + reg + ", " + smpExp);
        }
        else
        {
          System.out.println("la $v0, " + smpExp);
          System.out.println("add " + arg + ", " + reg + ", $v0");
        }
      }
      else if(tst ==3 )
      {
        if(tst2 == 0)
        {
          System.out.println("sub " + arg + ", " + reg + ", " + smpExp);
        }
        else if(tst2 == 1)
        {
          System.out.println("sub " + arg + ", " + reg + ", " + smpExp);
        }
        else
        {
          System.out.println("la $v0, " + smpExp);
          System.out.println("sub " + arg + ", " + reg + ", $v0");
        }              
      }
      else if(tst == 4)
      {
        if(tst2 == 0)
        {
          System.out.println("mul " + arg + ", " + reg + ", " + smpExp);
        }
        else if(tst2 == 1)
        {
          System.out.println("mul " + arg + ", " + reg + ", " + smpExp);
        }
        else
        {
          System.out.println("la $v0, " + smpExp);
          System.out.println("mul " + arg + ", " + reg + ", $v0");
        }           
      }
      else if(tst == 5)
      {
        if(tst2 == 0)
        {
          System.out.println("div " + arg + ", " + reg + ", " + smpExp);
        }
        else if(tst2 == 1)
        {
          System.out.println("div " + arg + ", " + reg + ", " + smpExp);
        }
        else
        {
          System.out.println("la $v0, " + smpExp);
          System.out.println("div " + arg + ", " + reg + ", $v0");
        }            
      }
      else {}
      return _ret;
   }

   /**
    * f0 -> "LE"
    *       | "NE"
    *       | "PLUS"
    *       | "MINUS"
    *       | "TIMES"
    *       | "DIV"
    */
   public R visit(Operator n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      return _ret;
   }

   /**
    * f0 -> "SPILLEDARG"
    * f1 -> IntegerLiteral()
    */
   public R visit(SpilledArg n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      String num = (String) n.f1.accept(this, argu);
      return (R) num;
   }

   /**
    * f0 -> Reg()
    *       | IntegerLiteral()
    *       | Label()
    */
   public R visit(SimpleExp n, A argu) {
      R _ret=null;
      String ret = (String) n.f0.accept(this, argu);
      String arg = (String) argu;
      if(arg != null)
      {
        if(arg.length()==3)
        {
          int tst = n.f0.which;
          if(tst == 0)
          {
            if(!arg.equals(ret))
            System.out.println("move " + arg + ", " + ret);
          }
          else if(tst == 1)
          {
            System.out.println("li " + arg + ", " + ret);
          }
          else if(tst == 2)
          {
            System.out.println("la " + arg + ", " + ret);
          }
          else {}
        }
      }
      return (R) ret;
   }

   /**
    * f0 -> "a0"
    *       | "a1"
    *       | "a2"
    *       | "a3"
    *       | "t0"
    *       | "t1"
    *       | "t2"
    *       | "t3"
    *       | "t4"
    *       | "t5"
    *       | "t6"
    *       | "t7"
    *       | "s0"
    *       | "s1"
    *       | "s2"
    *       | "s3"
    *       | "s4"
    *       | "s5"
    *       | "s6"
    *       | "s7"
    *       | "t8"
    *       | "t9"
    *       | "v0"
    *       | "v1"
    */
   public R visit(Reg n, A argu) {
      R _ret=null;
      String reg = "$";
     reg  += (String) n.f0.accept(this, argu);
      return (R) reg;
   }

   /**
    * f0 -> <INTEGER_LITERAL>
    */
   public R visit(IntegerLiteral n, A argu) {
      R _ret=null;
      String val = (String) n.f0.accept(this, argu);
      return (R) val;
   }

   /**
    * f0 -> <IDENTIFIER>
    */
   public R visit(Label n, A argu) {
      R _ret=null;
      String s = (String) argu;
      String lab = (String) n.f0.accept(this, argu);
      if(s!=null && s.equals("fromStmt"))
      {
        System.out.print(lab + ": ");
      }
      return (R) lab;
   }

   /**
    * f0 -> "//"
    * f1 -> SpillStatus()
    */
   public R visit(SpillInfo n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      n.f1.accept(this, argu);
      return _ret;
   }

   /**
    * f0 -> <SPILLED>
    *       | <NOTSPILLED>
    */
   public R visit(SpillStatus n, A argu) {
      R _ret=null;
      n.f0.accept(this, argu);
      return _ret;
   }

}
