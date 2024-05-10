class base{
    public int A,B;
    public base(){
        System.out.println("base constructor");
    }
    public void fun(){
        System.out.println("inside base fun");
    }

}
class derived extends base  //class derived :public base
{
    public int X,Y;
    public derived(){
        System.out.println("derived constructor");
    }
    public void gun(){
        System.out.println("inside derived gun");
    }

}
class singleX{
    public static void main(String Arg[]){
        base bobj1=new base();
        derived dobj=new derived();
        base bobj2=new derived();
        derived dobj2=new base();
        
    }
}