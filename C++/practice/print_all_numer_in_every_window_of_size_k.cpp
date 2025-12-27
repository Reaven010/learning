#include <iostream>
#include <algorithm>
#include<climits>
#include<queue>
using namespace std;

void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<"\t";
        q.pop();
    }
    cout<<endl;
}

void print_window(int arr[],int k,int n){
    queue<int>q;
    //added k-1 elements
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }
    //now main logic
    for(int i=k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}

int main() {
int arr[6]={3,6,2,7,8,11};
int k=3;
int n=6;
print_window(arr,k,n);    
}