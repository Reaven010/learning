public class max_sum {
    static int max(int a,int b){
        if (a>b){return a;}
        return b;
    }

    static int sum(int arr[],int start,int end){
        int add=0;
        while (start <=end){
            add+=arr[start];
            start++;
        }
        return add;
    }

    static int maximum_sum(int arr[]){
        int max=0,curr=max;
        for (int i=0;i<arr.length;i++){
            if (curr<0){
                curr=0;
            }
            curr+=arr[i];
            max=max(max, curr);

        }
        return max;
    }

    static int maximum_sum_brute(int arr[]){
        int n=arr.length,max=0,curr=max;
        for(int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                curr=sum(arr,i,j);
            }
            max=max(max,curr);
        }
        return max;
    }
    
    
    public static void main(String args[]){
        int arr[]={1,-2,3,4};
        int ans=maximum_sum_brute(arr);
        System.out.println("maximum sum is by brute force : "+ans);
        int ans2=maximum_sum(arr);
        System.out.println("maximum sum is by kadanes algorithm : "+ans2);

    }
}
