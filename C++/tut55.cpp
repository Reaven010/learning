#include<iostream>
using namespace std;

class base{
    public :
        int var_base;
        void display(){
            cout<<"the value of base variable is "<<var_base<<endl;
        }
};

class Derived : public base{
    public :
        int var_Derived;
        void display(){
            cout<<"the value of Derived variable is "<<var_Derived<<endl;
        }
};
int main(){
    base * base_pointer;
    base baseobj;
    Derived derivedobj;
    base_pointer = &derivedobj;
    base_pointer ->var_base =30;
    //the pointer sticks with display in base class this is also called early binding
    base_pointer->display();
    // pointer ->var_derived = 40; this will show an error 
    //     error: 'class base' has no member named 'var_derived'
    //             pointer ->var_derived = 40;

    Derived * derived_pointer ;
    derived_pointer = & derivedobj;
    derived_pointer ->var_Derived =100;
    derived_pointer ->display();
    return 0;
}