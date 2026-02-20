#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Minheap{
    int *arr;
    int size,totalsize;
    public:
    Minheap(int n){
        totalsize=n;
        arr=new int[n];
        size=0;
    }
    //inserting element;
    void insert(int value){
        if(size>=totalsize){
            cout<<"Heap Overflow";
            return ;
        }

        arr[size]=value;
        int index=size;
        size++;
        while(index>0 && arr[(index-1)/2]>arr[index]){
            swap(arr[index],arr[(index-1)/2]);
            index=(index-1)/2;
        }
        cout<<arr[index]<<" was added in Heap"<<endl;
    }
    void print(){
        for (int i=0;i<size;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }
    //delete 
    void heapify(int index){
        int smallest=index;
        int left=2*index+1;
        int right=2*index+2;
        if(left<size && arr[left]<arr[smallest]){
            smallest=left;
        }
        if(right<size && arr[right]<arr[smallest]){
            smallest=right;
        }
        if(smallest!=index){
            swap(arr[index],arr[smallest]);
            heapify(smallest);
        }
        else{
            return;
        }
    }

    void Delete (){
        if(size==0){
            cout<<"Heap underflow"<<endl;
            return ;
        }
        cout<<arr[0]<<" was deleted"<<endl;
        arr[0]=arr[size-1];
        size--;
        if(size==0){
            return;
        }
        else{heapify(0);}
    }
};

int main(){
    Minheap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(50);
    h.insert(1);
    h.insert(50);
    h.print();
    h.Delete();
    h.Delete();
    h.Delete();
    h.Delete();
    h.Delete();
    h.Delete();
    h.print();
}