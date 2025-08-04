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
    
}