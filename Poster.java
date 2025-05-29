
import java.util.Scanner;

public class main {

    public static void main(String args[]) {

        Scanner input=new Scanner(System.in);

        int n=input.nextInt();
int k=input.nextInt();
String s=input.next();
   if(k>n/2)
{
    for(int i=k-1;i<s.length()-1;i++){
        System.out.println("RIGHT");
    }
    for(int i=s.length()-1;i>=0;i--)
    {
        System.out.println("PRINT "+s.charAt(i));
       if(i!=0) System.out.println("LEFT");
    }

}
   else
   {
       for(int i=0;i<k-1;i++){
           System.out.println("LEFT");
       }
       for(int i=0;i<s.length();i++)
       {
           System.out.println("PRINT "+s.charAt(i));
           if(i!=s.length()-1) System.out.println("RIGHT");
       }

   }
    }
}
