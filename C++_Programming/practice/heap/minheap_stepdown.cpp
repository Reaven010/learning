#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int index,int n){
    int smallest =index;
    int left  = 2*index+1;
    int right = 2*index+2;
    if(left<n && arr[left]<arr[smallest]){
        smallest= left;
    }
    if(right<n && arr[right]<arr[smallest]){
        smallest =right;
    }
    if (smallest!=index){
        swap(arr[smallest],arr[index]);
        heapify(arr,smallest,n);
    }
}

void buildminheap(int arr[],int n){
    for (int i=(n-1)/2;i>=0;i--){
        heapify(arr,i,n);
    }
}

void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main(){
    int arr[10] = {10,20,54,23,5,29,2,60,59,80};
    buildminheap(arr,10);
    print(arr,10);
}