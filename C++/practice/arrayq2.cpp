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
    //printing in reverse order
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}