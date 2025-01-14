#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     //const makes it so we cant change the value of a variable
    // const int a=3;
    // a=45; //will give an error
    int a=3,b=5,c=78;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    //Operator precedence
    return 0;
}