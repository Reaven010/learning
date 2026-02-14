#include<iostream>
#include<cmath>
using namespace std;

/*
armstrong number
if number given =23 and (2^2)+(3^2) = 23 the nnumber is armstrong in this case its no
*/

int count(int n){
    int digits=0;
    while (n>0){
        n/=10;
        digits +=1;
    }
    return digits;
}
bool armstrong(int num,int digit){
    int n=num,ans=0,rem;
    while (n){
        rem =n%10;
        n/=10;
        ans+=pow(rem,digit);
    }
    if (ans == num){return true;}
    else{return false;}
}
int main(){
    int number;
    cout<<"enter a number : ";
    cin >>number;
    int digit = count(number);
    cout<<armstrong(number,digit);
    return 0;
}