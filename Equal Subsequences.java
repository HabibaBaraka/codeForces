

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
         t = input.nextInt();
        while (t-- > 0) {
        int n=input.nextInt();
        int k=input.nextInt();
        String s="";
        while(k-->0)
        {
            s+='1';
        }
        while(s.length()<n)
        {
            s+='0';
        }
        System.out.println(s);
        }
    }


}

