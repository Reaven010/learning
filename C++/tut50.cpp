#include<iostream>
using namespace std;

//a revisit to pointers

int main(){

    //basic pointer

    int a=4;
    int* ptr =&a;
    cout <<"the value of a is "<<*(ptr)<<endl;

    //new keyword - used to dynamically allocate memory 

    int *p =new int (40);
    cout <<"the value at address p is "<<*(p)<<endl;
    
    // array

    int *arr =new int [3];
    arr[0]=100;
    arr[1]=200;
    arr[2]=300;
    cout <<"the value of arr[0] is "<<arr[0]<<endl;
    cout <<"the value of arr[1] is "<<arr[1]<<endl;
    cout <<"the value of arr[2] is "<<arr[2]<<endl;
    
    //delete keyword
    
    delete [] arr;
    cout <<"the value of arr[0] is "<<arr[0]<<endl;
    cout <<"the value of arr[1] is "<<arr[1]<<endl;
    cout <<"the value of arr[2] is "<<arr[2]<<endl;
    return 0;
}