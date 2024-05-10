class base{
    public int A,B;
    public void fun(){
        System.out.println("inside base fun");
    }
    public void gun(){
        System.out.println("inside base gun");
    }
    public void sun(){
        System.out.println("inside base sun");
    }
    public void run(){
        System.out.println("inside base run");
    }
}
class derived extends base  //class derived :public base
{
    public int X,Y;
    public void gun(){
        System.out.println("inside derived gun");
    }
    public void run(){
        System.out.println("inside derived run");
    }
    public void mun(){
        System.out.println("inside derived mun");
    }
}
class RMD{
    public static void main(String Arg[]){
       base bobj=new derived();
       bobj.fun();
       bobj.gun();
       bobj.sun();
       bobj.run();
       //bobj.mun();

    }
}