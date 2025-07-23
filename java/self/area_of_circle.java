import java.util.*;
public class area_of_circle{
    public static void main(String args[]) {
        double radius;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter radius of circle");
        radius=sc.nextDouble();
        System.out.println(3.14*radius*radius);
        sc.close();
    }
}
