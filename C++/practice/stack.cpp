#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class stack{
    int *arr;
    int top;
    int size;
    
    public:

    bool flag;

    stack(int s){
        arr=new int[s];
        size=s;
        top=-1;
        flag=1;
    }

    //push
    void push(int val){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        top++;
        arr[top]=val;
        flag=0;
        cout<<"value pushed into stack : "<<val<<endl;
    }
    //pop
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            flag=1;
            return;
        }
        top--;
        cout<<"element popped : "<<arr[top+1]<<endl;
    }
    //peek
    int peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    //isempty
    bool isempty(){
        if(top==-1){
            return false;
        }
        else{
            return true;
        }
    }
    //issize
    int issize(){
        return top+1;
    }

};

int main() {
    stack s(5);
    s.push(-1);
    int val=s.peek();
    if(s.flag==0){
        cout<<val<<endl;
    }
}