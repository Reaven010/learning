//pointers
// pointer are data type which holds the address of other dagta types

#include <iostream>
using namespace std;
int main(){
    int a=3;
    int*b =&a;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;
    //value
    cout<<"the value at address of b is "<<*b<<endl;
    // pointer to pointer 
    int**c=&b;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the address of b is "<<&b<<endl;
    //value
    cout<<"the value at c is "<<*c<<endl;
    cout<<"the value at (value at c) is "<<**c<<endl;
    return 0;
}