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
class single{
    public static void main(String Arg[]){
        derived dobj=new derived();
        dobj.fun();
        dobj.gun();

    }
}