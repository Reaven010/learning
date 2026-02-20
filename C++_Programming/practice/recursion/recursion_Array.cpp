#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
int sum(int arr[],int index){
    if(index==-1){
        return 0;
    }
    return arr[index]+sum(arr,index-1);
}
int main() {
    int arr[5]={1,2,3,4,5};
    cout<<sum(arr,4);
}