#include<iostream>
#include <vector>//incde vector header file
#include<algorithm>//include algorithm header file

using namespace std;

int main(){
    // //create vector ,declare
    // vector<int> v;
    // vector <int >v3 ={2,4,4,6,}; 
    // //size and capacity
    // cout <<"size of vector : "<<v.size()<<endl;
    // cout <<"capacity of vector : "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout <<"size of vector : "<<v.size()<<endl;
    // cout <<"capacity of vector : "<<v.capacity()<<endl;
    // //update value
    // v[1]=5;
    // //elete value from vector
    // vector<int >vnew;
    // vnew.push_back(2);
    // vnew.push_back(3); 
    // vnew.push_back(213); 
    // vnew.push_back(3364); 
    // vnew.push_back(64); 
    // vnew.pop_back();
    // cout <<"size of vector : "<<vnew.size()<<endl;
    // cout <<"capacity of vector : "<<vnew.capacity()<<endl;
    
    // vnew.erase(vnew.begin()+1);
    // cout <<"size of vector : "<<vnew.size()<<endl;
    // cout <<"capacity of vector : "<<vnew.capacity()<<endl;
    // for (auto i=vnew.begin(); i!=vnew.end();i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;
    // //8nserting element 
    // vnew.insert(vnew.begin()+1, 100);
    // for (auto i=vnew.begin(); i!=vnew.end();i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    // //clear all elements
    // vnew.clear();
    // cout <<"size of vector : "<<vnew.size()<<endl;
    // cout <<"capacity of vector : "<<vnew.capacity()<<endl;

    vector<int>arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    //search in vector
    int key=5;
    cout<<binary_search(arr.begin(),arr.end(),key)<<endl;

    cout<<find(arr.begin(),arr.end(),key)-arr.begin()<<endl;
}
