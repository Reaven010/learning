public class Linearsearch {
    public static void main(String args[]){
        // int arr[]=new int [5];
        int arr[]={1,23,5654,32,80,2,10};
        int key=10;
        boolean flag= true;
        for (int i=0;i<arr.length;i++){
            if (arr[i]==key){
                flag=false;
                System.out.println(key+" found at : "+i);
                break;
            }
        }
        if (flag){
            System.out.println("element not found");
        }
    }
}