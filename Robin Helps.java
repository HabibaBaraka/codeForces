
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class main {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int t = 1;
        t = input.nextInt();
        while (t-- > 0) {
int n,k;
n=input.nextInt();
k=input.nextInt();
int arr[]=new int[55];
Long ans=0L;int cnt=0;
for(int i=0;i<n;i++)
{
    arr[i]=input.nextInt();
    if(arr[i]>=k)ans+=arr[i];
    else if(arr[i]==0&&ans>0)
    {
        cnt++;ans--;
    }
}
System.out.println(cnt);

        }
    }
}
