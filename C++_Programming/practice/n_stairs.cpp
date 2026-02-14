#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int fib(int n){
    int first=0,second=1;
    if (n<=1){
        return 1;
    }
    for (int i=0;i<n-1;i++){
        int temp=first;
        first=second;
        second+=temp;
    }
    return second;
}

int climbStaris(int n){
    return fib(n)+fib(n-1);
}

int main() {
    cout<<climbStaris(5);
}