#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int * merge(int arr1[], int arr2[], int n, int m) {
    int i=0,j=0;
    int k=0;
    int c[n+m];
    while(i<n &&j<m){
        if (arr1[i]<=arr2[j]){
            cout << arr1[i] << " ";
            c[k]= arr1[i];
            k++;
            i++;
        }
        else{
            cout << arr2[j] << " ";
            c[k]= arr2[j];
            k++;
            j++;
        }
    }
    return c;
}
int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int *c=merge(arr1, arr2, n, m);
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }
}