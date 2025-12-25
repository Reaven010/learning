#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val=0){
        data=val;
        next=NULL;
    }
};

class Queue{
    Node *front,*rear;
    public:
    Queue(){
        front=rear=NULL;
    }
    bool isempty(){
        return front==NULL;
    }
    void push(int x){
        if(isempty()){
            front=new Node(x);
            rear=front;
            return;
        }
        else{
            rear->next=new Node(x);
            rear=rear->next;
        }
    }
    void pop(){
        if(isempty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else{
            Node *temp=front;
            front=front->next;
            delete temp;
            if(front==NULL){
                rear=NULL;
            }
        }
    }
    int start(){
        if (isempty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }

};


int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.start()<<endl;
    q.pop();
    cout<<q.start()<<endl;
    q.pop();
    cout<<q.start()<<endl;
    q.pop();
    cout<<"the Queue is empty "<<boolalpha<<q.isempty()<<endl;
}