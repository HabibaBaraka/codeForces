import java.util.Scanner;

public class main {

    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);
        int t=1;
        //t = input.nextInt();
        while (t > 0) {

            int y = input.nextInt();
            int x = input.nextInt();
           if(x!=1&&y!=1)
           {
               System.out.println(1);
           }
           else if(x!=2&&y!=2)
            {
                System.out.println(2);
            }
            else
            {
                System.out.println(3);
            }
            t--;

        }
    }
}
