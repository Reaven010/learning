#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }
        void getdata(void){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
        void setdatabysum(complex o1,complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.getdata();
    c2.setdata(3,4);
    c2.getdata();
    c3.setdatabysum(c1,c2);
    c3.getdata();

    return 0;
}