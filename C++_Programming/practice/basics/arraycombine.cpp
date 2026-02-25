#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[4] ={4,5,6,7};
    int b[3]={1,2,3};
    int ans[7];
    for(int i=0;i<4;i++){
            ans[i]=a[i];
        }
        for(int i=0;i<4;i++){
            ans[i+4]=b[i];
        }
    for(int i=0;i<7;i++){
        cout<<ans[i]<<"\t";
    }
}