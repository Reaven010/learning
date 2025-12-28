#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Dequeue{
    int front,rear,size;
    int *arr;
    public:
    Dequeue(int k=100){
        arr=new int[k];
        front=rear=-1;
        size=k;
    }
    bool empty(){
        return front==-1;
    }
    bool full(){
        return (rear+1)%size==front;
    }
    void push_front(int x){
        if(empty()){
            front=rear=0;
            arr[front]=x;
        }
        else if(full()){
            cout<<"overrflow"<<endl;
            return ;
        }
        else{
            front=(front-1+size)%size;
            arr[front]=x;
        }
    }
    void push_back(int x){
        if(empty()){
            front=rear=0;
            arr[rear]=x;
        }
        else if(full()){
            cout<<"overflow"<<endl;
            return;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
        }
    }
    void pop_front(){
        if(empty()){
            cout<<"underflow"<<endl;
            return;
        }
        else {
            if(rear==front){
                front=rear=-1;
            }
            else{
                front=(front+1)%size;
            }
        }
    }
    void pop_back(){
        if(empty()){
            cout<<"underflow"<<endl;
            return;
        }
        else{
            if(rear==front){
                front=rear=-1;
            }
            else{
                rear=(rear-1+size)%size;
            }
        }
    }
    int start(){
        if(empty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int end(){
        if(empty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
};