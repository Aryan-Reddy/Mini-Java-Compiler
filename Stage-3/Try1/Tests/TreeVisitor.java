// The classes are basically the same as the BinaryTree 
// file except the visitor classes and the accept method
// in the Tree class

class TreeVisitor{
    public static void main(String[] a){
	System.out.println(new TV().Start());
    }
}

class TV {

    public int Start(){
	Tree root ;
	boolean ntb ;
	int nti ;
	MyVisitor v ;

	root = new Tree();
	ntb = root.Init(16);
	System.out.println(100000000);
	ntb = root.Insert(8) ;
	ntb = root.Insert(24) ;
	ntb = root.Insert(4) ;
	ntb = root.Insert(12) ;
	ntb = root.Insert(20) ;
	ntb = root.Insert(28) ;
	ntb = root.Insert(14) ;
	System.out.println(100000000);
	v = new MyVisitor();
	System.out.println(50000000);
	nti = root.accept(v);

	return 0 ;
    }

}


class Tree{
    Tree left ;
    Tree right;
    int key ;
    boolean has_left ;
    boolean has_right ;
    Tree my_null ;



    //Tree new_node ;
    //Tree current_node ;
    //Tree parent_node ;
    
   // boolean ntb ;
    //boolean cont ;
    //boolean found ;
    //int ifound ;
  //  boolean is_root ;
  //  int     nti ;
  //  int key_aux ;
   // int auxkey1 ;
   // int auxkey2 ;

    public boolean Init(int v_key){
	key = v_key ;
	has_left = false ;
	has_right = false ;
	return true ;
    }

    public boolean SetRight(Tree rn){
	right = rn ;
	return true ;
    }

    public boolean SetLeft(Tree ln){
	left = ln ;
	return true ;
    }

    public Tree GetRight(){
	return right ;
    }

    public Tree GetLeft(){
	return left;
    }

    public int GetKey(){
	return key ;
    }

    public boolean SetKey(int v_key){
	key = v_key ;
	return true ;
    }

    public boolean GetHas_Right(){
	return has_right ;
    }

    public boolean GetHas_Left(){
	return has_left ;
    }

    public boolean SetHas_Left(boolean val){
	 has_left = val ;
	 return true ;
    }

    public boolean SetHas_Right(boolean val){
	 has_right = val ;
	 return true ;
    }

    public boolean Compare(int num1 , int num2){
	boolean ntb ;
	int nti ;

	ntb = false ;
	nti = num2 + 1 ;
	if ((num1 <= num2)&&(num1 != num2)) ntb = false ;
	else if (!(num1 <= (nti-1))) ntb = false ;
	else ntb = true ;
	return ntb ;
    }

    public boolean Insert(int v_key){
	Tree new_node ;
	boolean ntb ;
	Tree current_node ;
	boolean cont ;
	int key_aux ;

	new_node = new Tree();
	ntb = new_node.Init(v_key) ;
	current_node = this ;
	cont = true ;
	while (cont){
	    key_aux = current_node.GetKey();
	    if (v_key <= (key_aux-1)){
		if (current_node.GetHas_Left())
		    current_node = current_node.GetLeft() ;
		else {
		    cont = false ;
		    ntb = current_node.SetHas_Left(true);
		    ntb = current_node.SetLeft(new_node);
		}
	    }
	    else{
		if (current_node.GetHas_Right())
		    current_node = current_node.GetRight() ;
		else {
		    cont = false ;
		    ntb = current_node.SetHas_Right(true);
		    ntb = current_node.SetRight(new_node);
		}
	    }
	}
	return true ;
    }
    public int accept(Visitor v){
	int nti ;

	System.out.println(333);
	nti = v.visit(this) ;
	return 0 ;
    }

}

  

class Visitor {
    Tree l ;
    Tree r ;

    public int visit(Tree n){
	int nti ;

	if (n.GetHas_Right()){
	    r = n.GetRight() ;
	    nti = r.accept(this) ; }
	else nti = 0 ;
	System.out.println(444444);
	if (n.GetHas_Left()) {
	    l = n.GetLeft(); 
	    nti = l.accept(this) ; }
	else nti = 0 ;

	return 0;
    }

}


class MyVisitor extends Visitor {

    public int visit(Tree n){
	int nti ;

	if (n.GetHas_Right()){
	    r = n.GetRight() ;
	    nti = r.accept(this) ; }
	else nti = 0 ;

	//System.out.println(444444);
	System.out.println(n.GetKey());
	//System.out.println(444444);
	if (n.GetHas_Left()) {
	    l = n.GetLeft(); 
	    nti =l.accept(this) ; }
	else nti = 0 ;

	return 0;
    }

}