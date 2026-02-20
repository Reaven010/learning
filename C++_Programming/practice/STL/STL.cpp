#include <iostream>
#include <algorithm>
#include<climits>
#include <bits/stdc++.h>

using namespace std;

int main() {    

    //pair
    pair<string,int>p;
        //two method of insert
        p=make_pair("sayujya",200);//by make_pair
        //using first and second********************************************** 
        p.first="sayujya";
        p.second=200;
        //*********************************************************************
        // name , age, weight
            pair<string,pair<int ,int>>triple;
            triple.first="sayujya";
            triple.second.first=20;
            triple.second.second=200;
            triple=make_pair("sayujya",make_pair(20,200));
    //LIST
        list<int>l;
        l.push_back(20);
        l.push_back(30);
        l.push_back(40);
        l.push_back(50);
        l.push_back(60);
        l.push_front(15);
        l.pop_back();
        l.pop_front();
        cout<<"front element is : "<<l.front()<<"\n"<<"last element is : "<<l.back()<<endl;
        cout<<"size : "<<l.size()<<endl;
        cout<< "iterator for list ***********************************"<<endl;
        for(auto it=l.begin();it!=l.end();it++){
            cout<<*it<<"\t";
        }

    //SET
        

}