#include<iostream>
using namespace std;

//virtual function
//here virtual fuction makes it so when pointer calls for display the function of derived class is invoked
//hence overwriting the early binding
class base{
    public :
        int var_base=50;
        virtual void display(){
            cout<<"the value of base variable is "<<var_base<<endl;
        }
};

class Derived : public base{
    public :
        int var_Derived=100;
        void display(){
            cout<<"the value of Derived variable is "<<var_Derived<<endl;
        }
};

int main(){
    base * basepointer;
    base baseobj;
    Derived derivedobj;
    basepointer =&derivedobj;
    basepointer ->display();
    return 0;
}