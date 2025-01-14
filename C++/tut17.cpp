#include<iostream>
using namespace std;

int product(int,int);


int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a>>b;
    cout<<"the value of procdct of a s=and b is"<<product(a,b)<<endl;
    return 0;
}
inline int product(int a,int b)
{
    return a*b;
}