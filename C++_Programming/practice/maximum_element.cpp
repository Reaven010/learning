#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    cout<<"enter size of array";
    int n;
    cin>>n;
    int arr[n];
    int ans=INT_MIN;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //maximum number
    for (int i=0;i<n;i++){
        ans=max(ans,arr[i]);
    }
    cout<<ans;
}