import java.io.*;
import java.util.*;
class AgeInvalid extends Exception{

}
class User{
    public static void main(String arg[]){
        try{
            
            Scanner sobj=new Scanner(System.in);
            System.out.println("Enter your age");
            int age=sobj.nextInt();
            if (age<18){
                throw new AgeInvalid();
            }
            else{
                System.out.println("Login Successfully!!!");
            }


         }
        catch (AgeInvalid obj){
            System.out.println("Age is invalid to register the site");
            }
    }
}