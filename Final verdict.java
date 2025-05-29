
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class main {

    public static void main(String args[]) {

        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t > 0) {

            int n = input.nextInt();
            int x = input.nextInt();
            Long sum=0L;
            List<Integer> arr = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                arr.add(i, input.nextInt());
               sum+=arr.get(i);
            }
            Long avr=sum/n;
            if (avr==x && avr*n==sum) System.out.println("YES");
            else System.out.println("NO");
            t--;

        }
    }
}
