class Base{
    public int A,B;
    public Base(){
         System.out.println("inside base constructor");
         this.A=10;
         this.B=20;
    }
    public void fun(){
         System.out.println("inside fun base");

    }
}
class Derived extends Base{
    public int X,Y;
    public Derived(int i,int j){
         super();
         System.out.println("inside derived constructor");
         this.X=i;
         this.Y=j;
    }
    public void gun(){
         System.out.println("inside gun Derived");
         super.fun();
         System.out.println("value of A: "+super.A);
         System.out.println("value of X: "+this.X);
    }

}
class Keyword{
    public static void main(String Arg[]){
         Derived dobj=new Derived(11,21);
         dobj.gun();
    }
}