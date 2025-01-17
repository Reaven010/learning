#include<iostream>
#include<cmath>
using namespace std;

class simple {
    int a,b;
    public:
        void getdatasimple(){
            cout<<"enter value of a"<<endl;
            cin>>a;
            cout<<"enter value of b"<<endl;
            cin>>b;
        }
        void perform_opperationsimple(){
            cout<<"the value of a + b is " <<a + b<<endl;
            cout<<"the value of a - b is " <<a - b<<endl;
            cout<<"the value of a * b is " <<a * b<<endl;
            cout<<"the value of a / b is " <<a / b<<endl;
        }
        
};

class scientific {
    int a;
    public:
        void getdatascientific(){
            cout<<"enter value of a"<<endl;
            cin>>a;
        }
        void perform_opperationscientific(){
            cout<<"the value of cos(a) is " <<cos (a)<<endl;
            cout<<"the value of sin(a) is " <<sin(a)<<endl;
            cout<<"the value of exp(a) is " <<exp(a)<<endl;
            cout<<"the value of tan(a) is " <<tan(a)<<endl;        
        }
};
class hybrid :public simple,public scientific{
    
};

int main(){
    hybrid calc;
    calc.getdatascientific();
    calc.perform_opperationscientific();
    calc.getdatasimple();
    calc.perform_opperationsimple();
    return 0;
}