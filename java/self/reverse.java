public class reverse {

    static void reverse_arr(int arr[]){
        int start=0,end=arr.length-1;
        while(start<=end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;end--;
        }
    }

    static void treverse(int arr[]){
        for (int i=0;i<arr.length;i++){
            System.out.print(arr[i]+"\t");
        }
        System.out.println();
    }
    public static void main(String args[]){
        int arr[]={1,3,14,50,34,2};
        
        System.out.println("array before reverse");
        treverse(arr);
        reverse_arr(arr);
        System.out.println("array after reverse");
        treverse(arr);
    }
}
