#include <iostream>
using namespace std;

void push(int arr[],int &top,int n){
    if (top == n-1){
        cout<<"stack overflow"<<endl;
    }
    else{
        top++;
        cout<<"enter element "<<endl;
        cin >>arr[top];
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
void display(  int arr[],int top){
    for (int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void peek(int arr[],int &top){
    cout<<arr[top]<<endl;
}
int main() {
    int arr[5];
    int top=-1;
    push(arr,top,5);
    push(arr,top,5);
    push(arr,top,5);
    display(arr,top);
    pop(arr,top,5);
    peek(arr,top);

}