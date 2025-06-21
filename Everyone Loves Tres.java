import java.util.List;
import java.util.Scanner;



public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
         t = input.nextInt();
        while (t-- > 0) {
        int n=input.nextInt();
       String s="";
       if((n&1)==1&&n>=5)
       {
         for(int i=0;i<n-5;i++)
         {
             s+='3';
         }
         s+="36366";
         System.out.println(s);
       }
       else if(n%2==0)
       {
           for(int i=0;i<n-2;i++)
           {
               s+='3';
           }
           s+="66";
           System.out.println(s);
       }
      else  System.out.println(-1);
        }
    }


}
 
