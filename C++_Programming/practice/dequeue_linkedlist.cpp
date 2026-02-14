#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node*next,*prev;
    Node(int data){
        this->data=data;
        next=prev=NULL;
    }
};

class Dequeue{
    Node*front,*rear;
    public:
    Dequeue(){
        front=rear=NULL;
    }
        bool empty(){
            return front==NULL;
        }
        void push_front(int x){
            if(empty()){
                front=rear=new Node(x);
                return ;
            }
            else{
                Node*temp=new Node(x);
                temp->next=front;
                front->prev=temp;
                front =temp;
                return ;
            }
        }
        void push_back(int x){
            if(empty()){
                front=rear=new Node(x);
                return;
            }
            else{
                Node*temp=new Node(x);
                rear->next=temp;
                temp->prev=rear;
                rear=temp;
                return ;
            }
        }
        void pop_front(){
            if(empty()){
                cout<<"underflow"<<endl;
                return;
            }
            else{
                Node*temp=front;
                front=front->next;
                delete temp;
                if(front){
                    front->prev=NULL;
                }
                else{
                    rear=NULL;
                }
            }
        }
        void pop_back(){
            if(empty()){
                cout<<"underflow"<<endl;
                return;
            }
            else{
                Node*temp=rear;
                rear=rear->prev;
                delete temp;
                if(rear){
                    rear->next=NULL;
                }
                else{
                    front=NULL;
                }
            }
        }
        int start(){
            if(empty()){
                return -1;
            }
            else{
                return front->data;
            }
        }
        int end(){
            if(empty()){
                return -1;
            }
            else{
                return rear->data;
            }
        }

};

int main() {
    Dequeue q;
    q.push_front(20);
    cout<<q.start()<<endl;
    q.push_back(30);
    cout<<q.end()<<endl;
    q.pop_front();
    cout<<q.start()<<endl;
    q.pop_back();
    q.push_front(20);
    cout<<q.end()<<endl;
}