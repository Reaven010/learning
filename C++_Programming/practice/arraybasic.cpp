#include <iostream>
using namespace std;

int main() {
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    bool flag=false;
    for (int i=0;i<10;i++){
        if (arr[i]==80){
            flag=true;
            break;
        }
    }
    if (flag){
        cout<<"element is present"<<endl;
    }
    else {
        cout<<"element is not present"<<endl;
    }
}