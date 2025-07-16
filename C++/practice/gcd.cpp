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
    int m,n;
    cin>>m;
    cin>>n;

    cout<<"gcd is "<<gcd (m,n)<<endl;
    
}