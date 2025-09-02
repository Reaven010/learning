import java.util.*;

public class binary_search {

    static int search(int arr[],int key){
        
        int start=0,end=arr.length;
        while (start !=end){
            int mid =start+(end-start)/2;
            if (arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                start=mid +1;
            }
            else{
                end=mid-1;
            }
        }
        
        return -1;
    }

    static void reverse(int arr[]){
        int start =0,end=arr.length-1;
        while(start!=end){
            int temp = arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;end--;
        }
    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int arr[]={2,4,6,8,10,12};
        System.out.println("enter element to be found");
        int key =sc.nextInt();
        sc.close();
        int index=search(arr,key);
       if ( index != -1){System.out.println("element found at : "+index);}
       else{ System.out.println("key not found");}

       reverse(arr);
       for (int i=0;i<arr.length;i++){
        System.out.print(arr[i]+"\t");
       }
    }
}
