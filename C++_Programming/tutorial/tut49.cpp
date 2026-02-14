#include<iostream>
using namespace std;
/*
syntex for initialisation list in constructor:
constructor (argument-list): initialisation section
{
    saaignment + othercode;
}

*/

class test{
    int a;
    int b;
    public:
        test(int i,int j) : a(i),b(j){
            cout<<"constructor executed"<<endl;
            cout<<"value of a is"<<a<<endl;
            cout<<"value of b is"<<b<<endl;
        }
};
//works as it should
class test2{
    int a;
    int b;
    public:
        test2(int i,int j) : a(i),b(j+a){
            cout<<"constructor executed"<<endl;
            cout<<"value of a is"<<a<<endl;
            cout<<"value of b is"<<b<<endl;
        }
};

// this case will return garbage value for a as a was assigned first so it has to be initialised first
class test3{
    int a;
    int b;
    public:
        test3(int i,int j) : b(j),a(i+b){
            cout<<"constructor executed"<<endl;
            cout<<"value of a is"<<a<<endl;
            cout<<"value of b is"<<b<<endl;
        }
};

int main(){
    test t(1,2);
    test2 p(1,2);
    test3 q(1,2);
    return 0;
}