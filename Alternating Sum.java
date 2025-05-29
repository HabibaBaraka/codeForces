import java.util.Scanner;

public class main {

    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);
        int t=1;
        t = input.nextInt();
        while (t > 0) {

           int x = input.nextInt();
           int sum=0;
          for(int i=0;i<x;i++)
          {
              int val=input.nextInt();
              if(i%2==0)sum+=val;
              else sum-=val;
          }
          System.out.println(sum);
            t--;

        }
    }
}
