#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    char arr[5]="1234";
    char *ptr=arr;
    cout<<arr<<endl;
    cout<<static_cast<void*>(ptr)<<endl;
    cout<<(void *)ptr<<endl;
    char name='a';
    char *ptr1=&name;
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr1;
}