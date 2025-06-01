
import java.util.Scanner;

public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
        t = input.nextInt();
        while (t-- > 0) {
            Long a, b;
            Long c, d;
            a = input.nextLong();
            b = input.nextLong();
            c = input.nextLong();
            d = input.nextLong();
            String ans="";
            Long stp=0L;
            if(c>=d) {ans=("Gellyfish");stp=d;}
            else {
                ans = ("Flower");
                stp=c;
            }
           if(a>=b)
           {
               if(b<=stp)
               {
                   ans="Gellyfish";
               }
           }
           else
           {
               if(a<stp)
               {
                   ans="Flower";
               }
           }

           System.out.println(ans);
        }
    }
}
