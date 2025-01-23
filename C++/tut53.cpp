#include<iostream>
using namespace std;

//in c++ most priority is given to local variable using same name in setdata function creates a problem so we use this function
//ths is a keyword which acts as a pointer which points to the object which invokes member function
class a{
    int a;
    public:
        void setdata(int a){
            this->a=a;
        } 
        void getdata(){
            cout<<"the vaue of a is "<<a<<endl;
        }
};

int main(){
    a b;
    b.setdata(20);
    b.getdata();    
    return 0;
}