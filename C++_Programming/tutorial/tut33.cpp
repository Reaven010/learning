#include<iostream>
using namespace std;

class bankdeposite{
    int principle ;
    int years ;
    float intrestrate;
    float returnvalue;

    public:
        bankdeposite(){}
        bankdeposite(int p,int q,float r);
        bankdeposite(int p,int q,int r);
        void show(void){
            cout<<"principle amount was"<<principle<<endl;
            cout<<"rate of intrest was"<<intrestrate<<endl;
            cout<<"return value "<<returnvalue<<endl;
            cout<<"time was "<<years<<endl;

        }
};
bankdeposite :: bankdeposite(int p ,int q,int r){
    principle=p;
    intrestrate =float(r)/100;
    years =q;
    returnvalue=principle;
    for (int i =0;i < q;i++){
        returnvalue*=1+r;
    }
}
bankdeposite :: bankdeposite(int p ,int q,float r){
    principle=p;
    intrestrate = r;
    years =q;
    returnvalue=principle;
    for (int i =0;i < q;i++){
        returnvalue*=1+r;
    }
}
int main(){

    bankdeposite b1(4000,5,3);
    b1.show();

    return 0;
}