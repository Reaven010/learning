#include<iostream>
using namespace std;
class employee 
{
    int id;
    int salary;
    public:
    void setid(void){
        cout <<"enter the id of employee"<<endl;
        cin>>id;
        cout<<"enter the salary of employee"<<endl;
        cin>>salary;
    }
    void getid (void){
        cout<<"the id of this employee is "<<id <<endl;    }
};

int main(){
    employee sayu[4];
    for (int i =0;i<4;i++){
        sayu[i].setid();
        sayu[i].getid();
    }
    return 0;
}