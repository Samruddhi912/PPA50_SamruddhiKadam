import java.util.Scanner;
class exception2
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);
        int Arr[]={10,20,30,40,50};
        System.out.println("enter number index: ");
        int i=sobj.nextInt();
        System.out.println(Arr[i]);
        System.out.println("End of code");
    }
}