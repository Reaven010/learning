import java.util.*;
public class hollow_rectangle {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        for (int i=0;i<n;i++){
            System.out.print("*");
        }
        System.out.print("\n");
        for (int i=0;i<n-2;i++){
            for (int j=0;j<n;j++){
                if (j==0 || j==n-1){
                    System.out.print("*");
                }
                else{System.out.print(" ");}
            }
            System.out.print("\n");
        }
        for (int i=0;i<n;i++){
            System.out.print("*");
        }
    }
}
