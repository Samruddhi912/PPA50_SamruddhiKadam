/* 
 getclass()
 hashCode()
 equals()
 clone()
 finalize()
*/
class Marvellous{
    public int i,j;
    public Marvellous(){
        System.out.println("Mavellous Constructor");

    }
    protected void finalize(){
        System.out.println("inside finalize method");
    }
}
//class Objectdemo extends Object
class Objectdemo1{
    public static void main(String arg[]){
        Marvellous obj=new Marvellous();
        System.out.println(obj.hashCode());
        obj= null;
        System.gc();
        

    }
}