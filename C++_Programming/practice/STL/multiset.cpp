#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    multiset<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.erase(10);//will erase the entries of 10;
    for (auto it=s.begin();it!=s.end();it++){
        cout<<*it<<"\t";
    }
}