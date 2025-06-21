
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
         t = input.nextInt();
        while (t-- > 0) {
        long n=input.nextLong();
        int k=input.nextInt();
       int sum=sumd(n);
       if(sum%k==0)
       {
           System.out.println(n);
       }
       else
       {
           do
           {

               n++;
               sum=sumd(n);
           }while (sum%k!=0);
           System.out.println(n);
       }
        }
    }

public static int sumd( long n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
}

