import java.util.*;
public class area_of_square{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter side of square");
        int side=sc.nextInt();
        int area=side*side;
        System.out.println("area of square is : " + area);
        //close is nessacery for preventing data leak
        sc.close();
    }
}
