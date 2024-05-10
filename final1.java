class demo{
    public int no1;
    public final int no2;
    public demo(){
        no1=21;
        no2=11;
    }
}
class final1{
    public static void main(String arr[]){
        demo dobj=new demo();
        dobj.no1++;
        dobj.no2++;   //dobj.no2=dobj.no2+1;

    }
}