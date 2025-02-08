#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;

    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count ++;

    }
    void getdata(void){
        cout<<"the id of this employee is "<<id<<"and this is employee number"<<count<<endl;
    }
    static void getcount(void){
        // cout<<id; this will throw an error as static member function can only access static data members
        cout<<"value of count is "<<count<<endl;
    }
};
int employee :: count;//default value is zero
int main(){
    employee shubh,rohan,lovish;
    employee ::getcount();

    shubh.setdata();
    shubh.getdata();

    employee ::getcount();
    rohan.setdata();
    rohan.getdata();

    employee ::getcount();
    lovish.setdata();
    lovish.getdata();
    employee ::getcount();
    return 0;
}
