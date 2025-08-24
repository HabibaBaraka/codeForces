
import java.util.Scanner;



public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
      //  t = input.nextInt();
        while (t-- > 0) {
int n= input.nextInt();
int seven=-1,four=-1;
            for(int i=n/7;i>=0;i--)
            {
                int j=n-(7*i);
                j/=4;
                if((j*4)+(7*i)==n)
                {
                    seven=i;four=j;
                    while(four-->0)System.out.print(4);
                    while(seven-->0)System.out.print(7);
                    return ;
                }
            }

           System.out.print(-1);

        }
    }
}
