class demo{
    public int addition(int a,int b){
        return a+b;
    }
    public int addition(int a,int b,int c){
        return a+b+c;
    }
    public double addition(double a,double b){
        return a+b;
    }
    public void fun(int a,double b){}
    public void fun(double a,int b){}
}
class overloading{
    public static void main(String arr[]){
        demo dobj=new demo();
        int iret=0;
        double dret=0.0;
        iret=dobj.addition(10,20);
        System.out.println(iret);
        iret=dobj.addition(10,20,30);
        System.out.println(iret);
        dret=dobj.addition(10.0,20.0);
        System.out.println(dret);

    }
}