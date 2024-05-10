interface circle{
    float radius=10.5f;
    float PI=3.14f;
    float area();
    float circumference();
}
class marvellous implements circle{
    public float area(){
        return PI*radius*radius;
    }
    public float circumference(){
        return 2*PI*radius;
    }
}

class blueprint{
    public static void main(String arr[]){
        marvellous mobj=new marvellous();
        System.out.println("area is : "+mobj.area());
        System.out.println("circumference is : "+mobj.circumference());
        System.out.println("value of radius  : "+circle.radius);
        System.out.println("value of PI is : "+circle.PI);
        //circle.PI=7.21;
    }
}