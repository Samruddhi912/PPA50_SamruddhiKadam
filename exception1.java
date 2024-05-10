import java.util.Scanner;
class exception1{
    public static void main(String arr[]){
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter first number: ");
        int no1=sobj.nextInt();
        System.out.println("enter second number: ");
        int no2=sobj.nextInt();
        float ans=no1/no2;
        System.out.println("Division is :"+ans);
    }
}