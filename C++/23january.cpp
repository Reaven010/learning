#include<iostream>
using namespace std;
//parameter and return
int sum(int a ,int b){
    return a+b;
}
//parameter and no return
void greatervalue(int a,int b){
    if (a>b){
        cout<<a<<endl;
    }
    else if (b>a){
        cout<<b<<endl;
    }
}
//no parameter and return
int multiplication(){
    int a,b;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    return a*b;
}
//no parameter no return;
void greet(void){
    cout<<"hello world"<<endl;
}


int main(){
    cout<<sum(10,20)<<endl;
    greatervalue(50,100);
    cout<<multiplication()<<endl;
    greet();
    return 0;
}