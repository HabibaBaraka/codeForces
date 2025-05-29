import java.util.Scanner;

public class main {

    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);
        int t=1;
        //t = input.nextInt();
        while (t > 0) {
boolean f=false;
         String s=input.next();
         for(int i=0;i<s.length()-1;i++)
         {

             String s1=s.substring(0,i+1);
             for(int j=1;j<=i;j++) {


                 String s2 = s.substring(j, s.length());
                 if (s1.equalsIgnoreCase(s2)) {
                     f = true;
                     System.out.println("YES\n" + s1);
                     break;
                 }
             }
             if(f)break;
         }
         if(!f)System.out.println("NO");
            t--;

        }
    }
}
