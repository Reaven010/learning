#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

void binarysearch(int arr[] ,int key,int end){
    int start=0;
    int mid=(start+end)/2;
    while(mid>=start && mid<=end){
        if(arr[mid]==key){cout<<"key found at "<<mid;
        break;}

        else if(arr[mid]>key){
            mid=(start+mid)/2;
        }
        else{
            mid=(end+mid)/2;
        }
    }

}
int main() {
    int arr[5]={1,2,3,4,5};
    binarysearch(arr,2,4);    
}