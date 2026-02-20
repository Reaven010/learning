#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

void print_birthday(int n){
    if (n==0){
        cout<<"Happy Birthday"<<endl;
        return ;
    }
    else{
        cout<<n<<" Days to go "<<endl;
        print_birthday(n-1);
    }
}

void print_nto1(int n){
    if (n==1){
        cout<<1<<endl;
        return ;
    }
    else{
        cout<<n<<" ";
        print_nto1(n-1);
    }
}

void even(int n){
    if (n==1){
        cout<<endl;
        return;
    }
    else if(n%2==0){
        cout<<n<<" ";
    }
    even(n-1);
}

int main() {
    print_birthday(5);
    print_nto1(5);
    even(5);
}