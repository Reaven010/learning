#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int n1=mid -low+1;
    int n2=high-mid;
    int left[n1], right[n2];
    for (int i=0;i<n1;i++){
        left[i]=arr[low+i];
    }
    for (int j=0;j<n2;j++){
        right[j]=arr[mid+1+j];
    }
    /************************* */
    int i=0 ,j=0;
    for (int k=low;k<=high;k++){
        if (left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
    }
}

void mergsort(int arr[],int low,int high){
    if(low >= high) return;
    while(low<=high){
        int mid=(low+high)/2;
        mergsort(arr, low, mid);
        mergsort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int arr[]= {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergsort(arr, 0, n-1);
    cout << "Sorted array is \n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}