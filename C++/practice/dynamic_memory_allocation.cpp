#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    //assigning variables to heap memory
    int *ptr=new int;
    *ptr =5;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int *ptr1=new int [n];
    //adding value to array
    for (int i=0;i<n;i++){
        ptr1[i]=i+1;
    }
    //printing values
    for (int i=0;i<n;i++){
        cout<<ptr1[i]<<"     ";
    }
    //using delete to clear memory
    delete ptr;
    delete[] ptr1;
}