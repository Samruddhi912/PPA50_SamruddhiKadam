import java.util.Scanner;
class exception3
{
    public static void main(String arr[])
    {
        try{
        Scanner sobj=new Scanner(System.in);
        int Arr[]={10,20,30,40,50};
        System.out.println("enter number index: ");
        int i=sobj.nextInt();
        System.out.println(Arr[i]);
        }
        catch(ArrayIndexOutOfBoundsException obj){
        System.out.println("inside catch block");
        }
        finally{
            System.out.println("inside finally block");
        }
        System.out.println("End of code");
    }
}