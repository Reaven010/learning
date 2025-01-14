#include <iostream>
using namespace std;
int c=45;
int main(){
    //***************BuiltIn Output datatype******************
    // int a,b,c;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // c= a+b;
    // cout<<"The sum of a and b is: "<<c<<endl;
    // cout<<"The value of global c is: "<<::c;
    //********************litrals **************************
    //f represents float
    //float d=34.4f;
    //l represents long double
    //long double e=34.4l;
    //**********************refrence variable******************
    // float x=455;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    //**********************typecasting******************
    int a=45;
    float b=45.46;
    cout<<"The value of a is: "<<(float)a<<endl;
    //cout<<"The value of a is: "<<float(a)<<endl;
    cout<<"The value of b is: "<<(int)b<<endl;
    //cout<<"The value of b is: "<<int(b)<<endl;
    int c= int(b);
    cout<<"The expression is: "<<a+b<<endl;
    cout<<"The expression is: "<<a+int(b)<<endl;
    return 0;

}