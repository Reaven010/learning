#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for finding mximum
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<< "mXIMUM NUMBER IS "<<max<<endl;
}