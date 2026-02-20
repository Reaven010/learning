#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<"\t";
    }
}
/*
set - uniqe elements,sorted
multiset - dulplicate ,sorted
unordered_set - unique
unordered_multiset - both property of unordered and multiset
*/