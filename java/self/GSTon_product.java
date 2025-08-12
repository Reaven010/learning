import java.util.*;
public class GSTon_product {
    public static void main(String args[]){
        float pencil,eraser,pen;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the price of pencil:");
        pencil = sc.nextFloat();
        System.out.println("Enter the price of eraser:");
        eraser = sc.nextFloat();
        System.out.println("Enter the price of pen:");
        pen = sc.nextFloat();
        float total =pencil + (pencil*0.18f)+pen+(pen*0.18f)+eraser+(eraser*0.18f);
        System.out.println(total);
        sc.close();
    }
}
