import java.util.*;
public class print_sum_first_n {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;
        while(n>0){
            sum+=n;
            n--;
        }
        System.out.println(sum);
    }
}
