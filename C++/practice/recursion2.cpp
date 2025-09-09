#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

//default paarameter
// void print(int end ,int start=1){
//     if (start==end){
//         cout<< start;
//         return;
//     }
//     cout<<start<<endl;
//     print(end,start+1);
// }

//using 1 parameter

void print(int n ){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}

//printing even
 void printeven(int n){
    if (n%2!=0 && n-1>=2 ){
        n-=1;
    }
    if (n<2){
        return ;
    }
    printeven(n-2);
    cout<<n<<endl;

 }

int main() {
    int n;
    cin>>n;
    printeven(n);
}