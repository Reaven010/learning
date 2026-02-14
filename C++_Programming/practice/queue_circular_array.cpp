#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class queue{
    int *arr;
    int front,rear;
    int size;
    public:
    queue(int n){
        int size=n;
        arr=new int[size];
        front=-1,rear=-1;
    }
    bool isempty(){
        return front==-1;
    }
    bool isfull(){
        return (rear+1)%size==front;
    }
    void push(int x){
        if(isempty()){
            front=rear=0;
            arr[rear]=x;
            return;
        }
        else if(isfull()){
            cout<<"queue overflow"<<endl;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
        }

    }
    void pop(){
        if(isempty()){
            cout<<"queue underflow"<<endl;
        }
        else {
            if (rear==front){
                front=rear=-1;
            }
            else{
                front=(front+1)%size;
            }
        }
    }
    int start(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};


int main() {
    
}