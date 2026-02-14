#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
//for more refrence visit cpprefrence.com
int main(){
    //function objects(functor) :
    // a function wrapped in a  class so that it is  available like an object  
    //sort({what},{till where},{how})
    int arr[] = {1,13,8,44,28,152,6};
    //sort(arr,arr+7); //assendinmg order
    //here greater is function object
    sort(arr,arr+7,greater<int>());//decending order
    
    for (int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}