#include<iostream>
using namespace std;
//structure
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;
//union
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    // ***********************structure**************************

    // ep harry;
    // harry.eId=1;
    // harry.favChar='c';
    // harry.salary=1200000;
    // cout<<"the value is "<<harry.eId<<endl;
    // cout<<"the value is "<<harry.favChar<<endl;
    // cout<<"the value is "<<harry.salary<<endl;

    // ***********************union******************************

    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.car<<endl;
    // cout<<m1.rice<<endl;

    // *************************enum******************************
    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    Meal m1=breakfast;
    cout<<m1<<endl;
    cout<<(m1==0)<<endl;
    return 0;
}