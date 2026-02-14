#include<iostream>
using namespace std;

//Forward declaration
class Y;

class X{
    int data;
    public:
    friend void add(X,Y);
        void setdata(int value){
            data=value;
        }
};

class Y{
    
    int num;
    public:
    friend void add(X,Y);
        void setdata(int value){
            num=value;
        }
};

void add(X o1,Y o2){
    cout<<"Sum is : "<<o1.data+o2.num<<endl;
}


int main(){
    X a;
    Y b;
    a.setdata(3);
    b.setdata(4);
    add(a,b);
    return 0;
}