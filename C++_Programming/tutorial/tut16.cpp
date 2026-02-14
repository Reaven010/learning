#include<iostream>
using namespace std;

//swap function using reference variables
void swap_pointer(int* a,int* b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
// int swap(int a,int b)
// {
//     int temp = a;
//     a=b;
//     b=temp;
// }
// swap using reference variables
void swap_refrence(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int x=5, y=6;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y);
    swap_pointer(&x,&y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap_refrence(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}