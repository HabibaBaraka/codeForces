
import java.util.Scanner;

public class main {

    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);
        int t=1;
        t = input.nextInt();
        while (t > 0) {
         Long n=input.nextLong();
              if((n&1L)==1)
              {
                  System.out.println(n/2+1);
              }
              else System.out.println(n/2);
            t--;

        }
    }

}
