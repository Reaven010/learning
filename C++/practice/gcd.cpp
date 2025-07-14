#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
int gcd (int a,int b){
    if (a>b){
        swap(a,b);
    }
    while (b){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main() {
    cout<<"gcd is "<<gcd (70,35)<<endl;
    cout<<"gcd is "<<gcd (101,25)<<endl;
}