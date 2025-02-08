#include<iostream>
#include<cmath>
using namespace std;

/*
create two class
    1. simple calculator - takes input of 2 utility function  and performs +,-,/,* and display
    2. takes input of two number using  a utility function and perform any four scientific operation of your choice
    3. create another class hybrid calculator and inharit it using these classes
*/
//inharitence used here is multiple inharitence in public mode
class simple_calculator{
    protected:
        int a;
        int b;
    public:
        void basic(){
            cout<<"a + b = "<<a+b<<endl;
            cout<<"a - b = "<<a-b<<endl;
            cout<<"a * b = "<<a*b<<endl;
            cout<<"a / b = "<<a/b<<endl;
        }
        simple_calculator(){
            a=10;
            b=20;
        }
};

class scientific_calculator{
    protected:
        int d=30;
        int e=40;
        void scientific(){
            cout<<"the value of d to power e is "<<pow(d,e)<<endl;
            cout<<"the value of remainder of d / e is "<<remainder(d,e)<<endl;
            cout<<"the value of hypotanus of d and e is "<<hypot(d,e)<<endl;
            cout<<"the value of d and e converted to complex is "<<d<<"+"<<e<<"i"<<endl;

        }
};
class hybrid_calculator : public simple_calculator,public scientific_calculator{
    public:
        void display(){
            basic();
            scientific();
        }
};
int main(){
    hybrid_calculator calc ;
    calc.display();
    return 0;
}