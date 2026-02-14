#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

void push(int arr[],int &top,int n,int element){
    if (top == n-1){
        cout<<"stack overflow"<<endl;
    }
    else{
        top++;
        arr[top]=element;
    }
}
void pop(int arr[],int &top,int n){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }
    else{
        cout<<arr[top]<<endl;
        arr[top]=0;
        top--;
    }
}

int main() {
int arr[3]={1, 2, 3};
int top=-1;
int stack[3];
for (int i =0;i<3;i++){
    push(stack, top, 3,arr[i]);
}
    //for showing result
for (int i=0;i<3;i++){
    pop(stack, top, 3);   
}
}
