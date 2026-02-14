public class print_subarrayt {

    static void print(int arr[],int start,int end){
        System.out.print("[");
        while (start<=end){
            System.out.print(arr[start]);
            if (start==end){
                break;
            }
            System.out.print(" ");
            start++;
        }
        System.out.print ("]"+"\t");
    }
    static void print_sub(int arr[]){
        int total=0;
        for (int i=0;i<arr.length;i++){
            for(int j=i;j<arr.length;j++){
                print(arr,i,j);
                total++;
            }
            System.out.println();
        }
        System.out.println("total subarray : "+total);
    }
    public static void main(String args[]){
        int arr[]={2,4,6,8,10};
        print_sub(arr);
    }
}
