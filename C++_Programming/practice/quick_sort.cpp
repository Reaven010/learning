#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for (int j=low;j<high;j++){
        if (a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}


void quick_sort(int a[],int low,int high){
    if (low <high){
        int q=partition(a,low,high);
        quick_sort(a,low,q-1);
        quick_sort(a,q+1,high);
    }
}

int main(){
    int arr[]={10,20,15,25,5};
    quick_sort(arr,0,5);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}