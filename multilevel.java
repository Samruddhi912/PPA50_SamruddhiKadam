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
class derivedX extends derived{
    public int P,Q;
    public derivedX(){
        System.out.println("derivedX constructor");
    }
    public void sun(){
        System.out.println("inside derivedX sun");
    }
}
class multilevel{
    public static void main(String Arg[]){
        derivedX dobj=new derivedX();
        dobj.fun();
        dobj.gun();
        dobj.sun();

    }
}