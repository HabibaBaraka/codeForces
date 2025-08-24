
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
        t = input.nextInt();
        while (t-- > 0) {
long n= input.nextLong();
if(n%3==0)
{
    System.out.println(n/3+" "+n/3);
}
else if(n%3==1)
{
    System.out.println((n/3+1)+" "+n/3);
}
else System.out.println(n/3+" "+(n/3+1));
        }
    }
}
