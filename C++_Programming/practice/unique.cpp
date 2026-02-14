#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
bool find(int arr[],int ans[]){
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        int temp=arr[i];
        int count=0;
        for (int j=0;j<n;j++){
            if (temp==arr[j]){
                count++;
            }
        }
        if (count>1){
            return false;
        }

        }
    return true;
    }

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int first=0;
    int temp[n];
    if (find(arr, temp)) {
        cout<<"All elements are unique"<<endl;
    }
    else{cout<<"not unique"<<endl; }
}