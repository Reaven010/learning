#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>p;//maxheap
    p.push(10);
    p.push(60);
    p.push(200);
    p.push(5);

    cout<<"current size of p is : "<<p.size()<<endl;

    while(!p.empty()){
        cout<<p.top()<<"\t";
        p.pop();
    }
    cout<<endl;

    //creating min heap
    priority_queue<int,vector<int>,greater<int>>q;//maxheap
    q.push(10);
    q.push(60);
    q.push(200);
    q.push(5);
    cout<<"current size of p is : "<<q.size()<<endl;

    while(!q.empty()){
        cout<<q.top()<<"\t";
        q.pop();
    }
    cout<<endl;
}