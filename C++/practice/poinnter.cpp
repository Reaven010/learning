#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    //address of first elemenmt
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    //address of second elemennt
    cout<<arr + 1<<endl;
    cout<<ptr+1<<endl;
    cout<<&arr[1]<<endl;
    //value of first element
    cout<<*arr<<endl;
    cout<<*ptr<<endl;
    cout<<arr[0]<<endl;
    //value of second element
    cout<<*(arr+1)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<arr[1]<<endl;
}