import java.util.*;
public class positive_negative {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int number=sc.nextInt();
        if (number>=0){
            System.out.println("Positive");
        }
        else {
            System.out.println("negative");
        }
        sc.close();
    }
}
