#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

void enqueue(int arr[],int n,int size,int &front,int &rear){
    if(rear==(size-1)){
        cout<<"overflow condition"<<endl;
    }
    else if(front ==-1 ){
        front=0;
        rear=0;
        arr[rear]=n;
    }
    else{
        rear++;
        arr[rear]=n;
    }
}
void display(int arr[],int front,int rear){
    for(int i=0;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void dequeue(int arr[],int &front,int &rear,int size){
    if (front==-1 || front>rear){
        cout<<"underflow"<<endl;
    }
    else {
        cout<<arr[front]<<endl;
        for (int i=0;i<rear;i++){
            arr[i]=arr[i+1];
        };
        arr[rear]=0;
        rear--;
        
    }
}

int main() {
    int queue[7];
    int front=-1,rear=-1;
    enqueue(queue, 10, 7, front, rear);
    enqueue(queue, 20, 7, front, rear);
    dequeue(queue, front, rear, 7);
    dequeue(queue, front, rear, 7);
    enqueue(queue, 30, 7, front, rear);
    dequeue(queue, front, rear, 7);
}