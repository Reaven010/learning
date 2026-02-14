#include<iostream>
using namespace std;

class number{
    int a;
    public:
    // when no copy constructor is found , compiler assigns its own copy constructor 
        number(){
            a=0;
        }
    number(number &obj){
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }
    number(int num){
        a=num;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
    }

};
int main(){
    number x,y,z(45);
    z.display();
    y.display();
    x.display();
    number z1(z);
    z1.display();
    return 0;
}