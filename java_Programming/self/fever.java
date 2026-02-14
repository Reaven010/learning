import java.util.*;
public class fever {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        double temp=sc.nextDouble();
        System.out.println((temp>=100)?"fever":"normal");
    }
}
