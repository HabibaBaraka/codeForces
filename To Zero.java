
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class main {

    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t > 0) {

            Long n = input.nextLong();
            Long x = input.nextLong();
            Long cnt=0L;
          if((n&1)==1)
          {
              for(Long i=x;i>=1;i--)
              {
                  if((i&1L)==1)
                  {
                      cnt++;
                      n-=i;
                      break;
                  }
              }
          }
         if(n%2==0)
         {
             if((x&1)==1)
             {
                 x--;
             }
             cnt+=n/x;
             n=n%x;
         }
           if(n!=0)cnt++;
          System.out.println(cnt);
            t--;

        }
    }
}
