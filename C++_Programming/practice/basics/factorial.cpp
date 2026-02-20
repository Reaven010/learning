#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
     cout<<"factorial of "<<n<<" is ";
    int i=1;
     for (n;n>0;n--){
        i*=n;
     }
     cout<<i<<endl;
}