#include<iostream>
#include <vector>
#include<algorithm>
#include<climits>
using namespace std;

bool divide(vector<int>arr){
    int prefix=0,total_sum =0,n=arr.size();
    //total sum
    for (int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    //prefix sum
    for (int i=0;i<n;i++){
        prefix+=arr[i];
        if (2*prefix==total_sum){
            return 1;
        }
    }
    return 0;
}

int main(){

    int n;
    cout<<"enter the siz eof array : "<<endl;
    cin >>n;
    vector<int >v(n);
    for (int i=0;i<n;i++){
        cin>>v[i]; 
    }
    cout<<divide(v);
    
    return 0;

}