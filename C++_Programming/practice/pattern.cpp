#include<iostream>
using namespace std ; 

int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    for (int i=0;i<=n;i++){
        for (int i=0;i<=n;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"*********************************"<<endl;
    char p ='a';
    for (int i=1;i<=n;i++){
        for (int i=0;i<n;i++){
            cout<<char(p+i)<<"  ";
        }
        p++;
        cout<<endl;
    }
    cout<<"*********************************"<<endl;
    int count = 1;
    for (int i=1;i<=n;i++){
        for (int i=0;i<n;i++){
            cout<<count<<"  ";
            count++;
        }
        cout<<endl;
    }
}
