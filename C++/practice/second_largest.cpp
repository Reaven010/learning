#include<iostream>
using namespace std;
class solution {
    public:
    int print2largest(int arr[],int n){
        int ans = -1;
        for(int i=0;i<n;i++){
            if (arr[i]>ans){
                ans = arr[i];
            }
        }
        int second =-1;
        for (int i =0;i<n;i++){
            if (arr[i]!=ans){
                 second = max(second,arr[i]);
            }
        }
        return second;
        }
};
int main(){
    int arr[5]={1,5,3,7,5};
    solution obj;
    cout<<obj.print2largest(arr,5);
    return 0;
}