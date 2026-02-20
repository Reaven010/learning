#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class stack{
    Node*top;
    int size;

    public:
    stack(){
        top =NULL;
        size=0;
    }
    void push(int val){
        Node*temp=new Node(val);
        if(temp==NULL){
            cout<<"Stack overflow"<<endl;
            return;
        }
        temp->next =top;
        top=temp;
        size++;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        Node*temp=top;
        top=top->next;
        delete temp;
        size--;
    }
    int peek(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    bool isempty(){
        if(top){
            return false; 
        }
        return true;
    }

    int issize(){
        return size;
    }

};

int main() {
    stack ss;
    ss.push(1);
    ss.push(2);
    ss.push(3);
    ss.push(6);
    ss.pop();
    ss.push(4);
    cout<<ss.issize();
    int val=ss.peek();
    if(!ss.isempty()){cout<<val;}
}