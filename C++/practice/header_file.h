#include<iostream>
#include<algorithm>
#include<climits>
//this is how to create eternal header file
//  then create a new file and include this header file in that file with .h extention
//  then you can use the function in that file #include "header_file.h"
using namespace std;

class solution{
    string a;
    public:
    void print(string a){
        cout<<"welcome, "<<a<<endl;
    }
    solution(string a){
        this->a=a;
    }
};