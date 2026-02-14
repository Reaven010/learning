#include<iostream>
using namespace std;

//pointer on objects

class complex{
    int real,imaginary;
    public:
        void getdata(){
            cout<<"the real part is "<<real<<endl;
            cout<<"the imaginary part is "<<imaginary<<endl;
        }

        void setdata(int a ,int b){
            real=a;
            imaginary=b;
        }
};
int main(){
    // --------------classic method--------------------------------
    // complex c1;
    // c1.setdata(1,50);
    // c1.getdata();
    //--------------using pointer to--------------------------------
    // complex *ptr =&c1;
    // (*ptr).setdata(1,20);
    // (*ptr).getdata ();
    //-------------creating oject with new and pointer ands use of arrow opperator--------------
    complex *ptr = new complex;
    ptr->setdata(1,20);//same as (*ptr).setdata(1,20);
    ptr->getdata ();//same as (*ptr).getdata ();

    //--------------array of objects--------------------------------
    complex *ptr1 = new complex[2];
    cout <<"at opbject in 0 index"<<endl;
    ptr1->setdata(2,50);
    ptr1->getdata ();
    cout <<"at opbject in 1 index"<<endl;
    (ptr1+1)->setdata(3,30);
    (ptr1+1)->getdata ();

    return 0;
}