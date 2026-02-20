#include<iostream>
using namespace std;

int main(){
    int arr[1000],n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=1;i<n;i++){
        for (int j=i; j>0; j--){
            if (arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
void insertionSort(int arr[],int n){
    for (int j=1;j<n;j++){
        int key=arr[j];
        int i=j-1;
        while(i>=0 && arr[j]>key){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}