#include <iostream>

#include<climits>
using namespace std;

int linear_search(int arr[],int key,int size){
    for (int i=0;i<size;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int binaryy_search(int arr[],int key,int size){
    int low=0,high=size-1;
    int mid=low+high/2;
    while (low <=high){
        if (arr[mid]==key){return mid;}
        else if(arr[mid]<key) {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[5]={1,2,3,4,5};
    cout<<"using linear search value found at \t"<<binaryy_search(arr,3,5)<<endl;
    int arr2[5]={32,56,22,256,1};
    cout<<"using binary search value found at \t"<<linear_search(arr2,256,5)<<endl;
}