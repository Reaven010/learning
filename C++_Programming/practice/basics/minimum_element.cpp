#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    cout<<"enter size of array";
    int n;
    cin>>n;
    int arr[n];
    int ans=INT_MAX;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //maximum number
    for (int i=0;i<n;i++){
        ans=min(ans,arr[i]);
    }
    cout<<ans;
}