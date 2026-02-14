import java.util.*;
public class average {
    public static void main(String args[]){
        int num1,num2,num3;
        double average;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter numbers");
        num1=sc.nextInt();
        num2=sc.nextInt();
        num3=sc.nextInt();
        //average=sum of outcomes/total values
        average=(num1+num2+num3)/3;
        System.out.println("average is : "+average);
        sc.close();

    }
}
