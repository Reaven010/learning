#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter number of rows:";
    cin>>n;
    cout <<"triangle"<<endl;
    for (int i=0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout <<"assending number truiangle"<<endl;
    for (int i=0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout <<"decending number truiangle"<<endl;
    for (int i=0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<n-j<<" ";
        }
        cout<<endl;
    }
    cout <<"alphabet tirangle"<<endl;
    char c='a';
    for (int i=0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<char(c+j)<<" ";
        }
        cout<<endl;
    }
    cout<<"reverse triangle"<<endl;
    for (int i=0;i<n;i++){
        for (int j =0;j<=n-(i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout <<"reverse triangle with increasing number"<<endl;
    for (int i=0;i<n;i++){
        for (int j =0;j<=n-(i+1);j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}