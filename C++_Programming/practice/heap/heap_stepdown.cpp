#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int index,int n){
    int largest =index;
    int left = 2*index+1;
    int right= 2*index+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
    else{
        return;
    }
}


void buildmaxheap(int arr[],int n){
    for(int i=(n-1)/2;i>=0;i--){
        heapify(arr,i,n);
    }
}

void print (int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}


void heapsort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}

int main(){
int arr[10] = {10,20,54,23,5,29,2,60,59,80};
buildmaxheap(arr,10);
print(arr,10);
}