import java.util.*;

public class typecasting {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number:");
        int num = sc.nextInt();
        System.out.println( num);
        float f=num;
        System.out.println(f);
        System.out.println("enter a float value");
        f=sc.nextFloat();
        int i=(int)f;
        System.out.println(i);

    }
    
}
