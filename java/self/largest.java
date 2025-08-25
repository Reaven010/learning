public class largest {
    public static void large(int arr []){
        int temp=arr[0];
        for (int i=1;i<arr.length;i++){
            if (arr[i]>temp){
                temp=arr[i];
            }
        }
        System.out.println("Maximum element is : "+temp);
    }
    public static void main(String args[]){
        int arr[]={21,345,56,21,65,21,456};
        large(arr);

    }
}
