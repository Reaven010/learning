import java.util.*;
public class bionomial_cofficient {
    public static int factorial(int n){
        if (n==0){return 1;}
        int ans=1;
        for (int i=1;i<=n;i++){
            ans*=i;
        }
        return ans;
    }
    public static int bionomial_cofficient(int n,int r){
        int ans =(int)(factorial(n))/(factorial(r)*factorial(n-r));
        return ans;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter value of n and r ");
        int n=sc.nextInt();
        int r=sc.nextInt();
        System.out.println("the bionomial cofficient of give n and r is \t"+bionomial_cofficient(n, r) );

    }
}
