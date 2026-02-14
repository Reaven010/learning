#include<iostream>
using namespace std;

int binary_search(int arr[],int n ,int key){
    int start=0,end =n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2 ;//mid point
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else{
            end =mid-1;
        }
        }
        return -1;
    }

int main(){
    int arr[1000],n,key;
    cout <<"enter size of array"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter a key";
    cin>>key;
    cout<<binary_search(arr,n,key);
    return 0;
}