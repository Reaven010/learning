#include <iostream>
#include<climits>
#include <vector>
using namespace std;

void bubble_sort_asc(vector<int> &arr){
    for (int i=0;i<arr.size();i++){
        bool flag=false;
        for (int j=0;j<arr.size()-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if (!flag){
            break;
        }

    }
}

void bubble_sort_dsc(vector<int> &arr){
    for (int i=0;i<arr.size();i++){
        bool flag=false;
        for (int j=0;j<arr.size()-1;j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if (!flag){
            break;
        }

    }
}


int main() {
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"enter the elements of array"<<endl;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    bubble_sort_asc(arr);
    cout<<"sorted array in ascending"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort_dsc(arr);
    cout<<"sorted array in descending"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}