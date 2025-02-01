#include<iostream>
using namespace std;

int main(){
    int number,binary,remainder,multiplier=1,answer=0;
    cout<<"enter number in binary";
    cin>>number;
    //binary to decimal
    while(number>0){
        remainder=number%10;
        number/=10;
        answer+=remainder*multiplier;
        multiplier*=2;
    }
    cout<<"binary "<<answer<<endl;
    //binary to octal
    multiplier=1;
    binary=answer;
    answer=0;
    while (binary !=0){
        remainder=binary%8;
        binary/=8;
        answer+=remainder*multiplier;
        multiplier*=10;
    }
    cout<<"octal "<<answer<<endl;
    return 0;
}