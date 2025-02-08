#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        //creating a constructor
        complex(void);//constructor declaration
        void print(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex :: complex(void){
    a=0;
    b=0;
}
int main(){
    complex c1;
    c1.print();
    return 0;
}