#include <iostream>
using namespace std;

int main (){
    //decimal to binary
    int number;
    int remainder,answer=0,multiplyer=1;
    cout<<"enter a number ";
    cin>>number;
    //using mathamatical opperations

    // while (number !=0){
    //     remainder=number%2;
    //     number/=2;
    //     answer+=remainder*multiplyer;
    //     multiplyer*=10;
    // }
    // cout<<"using maths "<<answer<<endl;

    //using bitwise operation
    
    while (number !=0){
        /* convert number to binary and then takes and of it for example
        1101
        0001                returns 1*/
        remainder=number&1;
        // rshift by 1 implies devide by 2
        number= number>>1;
        answer+=remainder*multiplyer;
        multiplyer*=10;
    }
    cout <<"using bitwise operations "<<answer<<endl;
    return 0;
}