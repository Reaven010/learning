import java.util.*;

public class area_using_switch_case {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("1 : square\n2 : Circle \n3 : rectangle\n4 : cone\n5 : Triangle" );
        System.out.println("Enter your choice");
        int ch=sc.nextInt();
        switch (ch){
            case 1:
            System.out.println("Enter side of ssquare");
            int n= sc.nextInt();
            System.out.println(n*n);
            break;
            case 2:
            System.out.println("enter radious of circle");
            int r=sc.nextInt();
            System.out.println(3.14*r*r);
            break;
            case 3:
            System.out.println("rectangle");
            System.out.println("length");
            int l=sc.nextInt();
            System.out.println("bredth");
            int b=sc.nextInt();
            System.out.println(l*b);
            break;
            case 4:
            System.out.println("radious oif cone");
            int ra=sc.nextInt();
            System.out.println("l oif cone");
            int la=sc.nextInt();
            System.out.println(3.14*ra*(ra+la));
            break;
            case 5:
            System.out.println("base");
            int base=sc.nextInt();
            System.out.println("height");
            int h=sc.nextInt();
            System.out.println(0.5*base*h);
            break;
            default:
            System.out.println("invalid input");
            break;
        }
        sc.close();
        
    }
}
