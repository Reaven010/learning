#include<iostream>
using namespace std;

int main(){
    int arr[6]={10,2,8,1,6,123};
    for (int i =0;i<5;i++){//n-1 becsuse if 4 element are sorted, the last one is automatically sorted
        int index=i;
        for (int j=i+1;j<6;j++){//to find minimum in the unsorted array
            if (arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

