#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr;
    int size,totalsize;
    public:
    MaxHeap(int n ){
        size=0;
        totalsize=n;
        arr=new int[n];
    }

    void insert(int value){
        if(size>=totalsize){
            cout<<"Heap Overflow"<<endl;
            return;
        }
        arr[size]=value;
        int index=size;
        size++;
        //compairing and organising heap
        while(index!=0 && arr[(index-1)/2]<arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }
        cout<<arr[index]<<" is inserted in heap"<<endl;
    }

    void print(){
        for (int i=0;i<size;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }

    //delete operation in heap we will only delete top element

    void heapify(int index){
        int largest =index;
        int left=2*index+1;
        int right=2*index+2;
        if(left<size && arr[left]>arr[largest]){
            largest =left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest =right;
        }

        if(largest !=index){
            swap(arr[index],arr[largest]);
            heapify(largest);
        }
        else{
            return;
        }
    }

    void Delete(){
        if(size==0){
            cout<<"Heap underflow"<<endl;
            return ;
        }
        cout<<arr[0]<<" element deleted form Heap"<<endl;
        arr[0]=arr[size-1];
        size--;
        heapify(0);
    }



};

int main(){
    MaxHeap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.Delete();
    h.Delete();
    h.Delete();
    h.Delete();
    h.Delete();
    h.Delete();
    h.print();



    return 0;
}