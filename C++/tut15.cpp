#include<iostream>
using namespace std;
//function prototype
// int sum(int a,int b);-->acceptable
int sum (int,int);//acceptable
void g();
//here num1 and num2 are actual parametre
//here a nad b are formal parameter
int main(){
    int num1,num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    g();
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
void g()
{
    cout<<"hello world";
}