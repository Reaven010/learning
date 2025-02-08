#include<iostream>
using namespace std;

//base class
class employee{
    public:
        int id;
        float salary;
        employee(int Id){
            id=Id;
            salary = 34;
        }
        employee(){}
};

//derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class menber /method etc
};
*/
//default visibility mode is private 
//creating programmer class derived class from employee class
/*
1.private visibility-public member of base will be private member of derived class
2.public visibility-public member of base will be public member of derived class
3. on default base class is inharited as private class 
*/
class programmer : public employee{
    public:
    int languagecode =9;
    programmer(int ID){
        id=ID;
        salary = 69;
    }
    void getdata(){
        cout<<"id = "<<id<<endl;
        cout<<"salary = "<<salary<<endl;
    }
};
int main(){
    employee sayujya(1),rohan(2);
    cout<<sayujya.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer john(3);
    cout<<john.languagecode<<endl;
    john.getdata();
    //since employee is inharited in public we can access all elementes directly
    cout<<john.id;
    return 0;
}