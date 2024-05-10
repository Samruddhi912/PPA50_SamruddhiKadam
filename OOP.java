class OOP{
    public static void main(String Arg[]){
        Arithematic obj1= new Arithematic();
        Arithematic obj2=new Arithematic(21,11);
        int ret=0;
        ret=obj2.Addition();
        System.out.println(ret);//32
        ret=obj2.Substraction();
        System.out.println(ret);//10
    }
}

class Arithematic{

    public int no1;
    public int no2;
    public Arithematic(){
        System.out.println("inside default constructor");
        this.no1=0;
        this.no2=0;
    }
    public Arithematic(int a,int b){
        System.out.println("inside parametrised constructor");
        this.no1=a;
        this.no2=b;
    }
    public int Addition(){
        int ans=0;
        ans=no1+no2;
        return ans;
    }
    public int Substraction(){
        int ans=0;
        ans=no1-no2;
        return ans;
    }

}