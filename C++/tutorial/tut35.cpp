#include<iostream>
using namespace std;
int count=0;
class num{
    //destructor never takes input or returns output
    public:
        num(){
            count++;
            cout<<"this is the time when constructor is called"<<count<<endl;
        }

        ~num(){
            cout<<"this  is the time when my destructor is called "<<count<<endl;
            count--;
        }
};
int main(){
    cout <<"we are inside main function"<<endl;
    num n1 ;
    {
        cout <<"entering this block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}