#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    //*****************control statement if else ladder******************
    // if (age<18){
    //     cout<<"officers i thought she was old enough"<<endl;
    // }
    // else if (age==18){
    //     cout<<"its legal now"<<endl;
    // }
    // else if(age<=0){
    //     cout<<"bhosdike paida to hoja"<<endl;
    // }
    // else{
    //     cout<<"expired"<<endl;
    // }
    //*****************control statement switch case******************
    switch (age)
    {
        case 18:
            cout<<"its legal now"<<endl;
            break;
        case 10:
            cout<<"officers i thought she was old enough"<<endl;
            break;
        case 50:
            cout<<"expired"<<endl;
            break;
        default:
            cout<<"bhosdike paida to hoja"<<endl;
            break;
    }
    return 0;
}