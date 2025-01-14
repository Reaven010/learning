#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        
        int addrealcomplex(complex,complex);
        int addcompcomplex(complex,complex);
};

class complex{
    int a,b;
    public:
        //indivisually declaring function as friend
        // friend int calculator :: addrealcomplex(complex,complex);
        // friend int calculator :: addcompcomplex(complex,complex);

        //to declare the whole class as friend
        friend class calculator;

        void setnumber(int n1,int n2){
            a=n1;
            b=n2;
        }

        void print(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int calculator :: addrealcomplex(complex o1,complex o2){
    return (o1.a + o2.a);
}
int calculator :: addcompcomplex(complex o1,complex o2){
    return (o1.b + o2.b);
}
int main(){
    complex c1,c2;
    calculator calc;
    c1.setnumber(1,4);
    c2.setnumber(5,7);
    int resultreal=calc.addrealcomplex(c1,c2);
    int resultcomp=calc.addcompcomplex(c1,c2);
    cout<<"the sum of real part of complex number c1 and c2 is "<<resultreal<<endl;
    cout<<"the sum of complex part of complex number c1 and c2 is "<<resultcomp<<endl;
    return 0;
}