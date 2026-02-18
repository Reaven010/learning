#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int ,int>m;
    m.insert(make_pair(10,20));
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,40));
    m.insert(make_pair(40,50));
    m[100]=200;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<"\t"<<it->second<<endl;
    }
}
/*
map uses avl tree or red black tree to store data
map - ordered ,unique
multimap - ordered ,doesnotr allow m[100]=200 format as it creates confusing if to update or insert
unordered_map - unique ,unorederd takes o(1) time to insert ,update ,delete ,retrieve
unordered_multimap - combination of multimap and unordered properties
*/