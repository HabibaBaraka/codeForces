package SOLID5;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
        t = input.nextInt();
        while (t-- > 0) {
           Long l,r;
           l=input.nextLong();
           r=input.nextLong();
           System.out.println((r-l+1)-cnt(r)-cnt(l-1));
        }
    }
    public static Long cnt(Long x)
    {
        Long ans=(x/2)+x/3+x/5+x/7;
        ans-=(x/6+x/10+x/14+x/15+x/35+x/21);
        ans+=(x/(2*3*5)+x/(2*3*7)+x/(3*5*7)+x/(2*5*7));
        ans-=(x/(2*3*5*7));
        return ans;
    }
}
