#include<iostream>
#include<cstring>
using namespace std;
//strcpy - it is used to copy the string form one to another
class life{
    protected:
        int age ;
        char title[30];
    public:
        life(char *s,int age){
            strcpy(title,s);
            this ->age = age;
        }
        virtual void display(){}
};

class private_life : public life{
    int salary;
    public:
        private_life(char * s ,int age ,int salary ) : life(s,age){
            this ->salary = salary;
        }
        void display(){
            cout<<"the title of the person is "<<title<<endl;
            cout<<"the age of the person is "<<age<<endl;
            cout<<"the salary of the person is "<<salary<<endl;
        }
};
class public_life : public life{
    int followers;
    public:
        public_life(char * s ,int age ,int followers ) : life(s,age){
            this ->followers = followers;
        }
        void display(){
            cout<<"the title of the person is "<<title<<endl;
            cout<<"the age of the person is "<<age<<endl;
            cout<<"the followers of the person is "<<followers<<endl;
        }
};

// rules of virtual function:-
//     1. they cannot be static
//     2. they are accessed by object pointers
//     3. virtual functions can be a friend of another class
//     4. A virtual function in the base class might not be used.
//     5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
//     6. When a virtual function is defined in a base class, it is expected to be redefined in the derived class.
//     7. If the virtual function is not defined in the base class, the base class function is used.


int main(){
    char * title = new char[30];
    int salary,age ,followers;
    cout<<"enter the title of the person"<<endl;
    cin.getline(title,30);
    salary = 10000;
    age = 20;
    private_life sayujya(title,age,salary);
    sayujya.display();
    cout<<"enter the followers of the person"<<endl;
    cin>>followers;
    public_life sayujya1(title,age,followers);
    sayujya1.display();
    return 0;
}