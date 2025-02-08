#include<iostream>
using namespace std;
/*
class template with mukltiple parameters 
template<class t1,class t2,...(comma saparated)>
*/
template<class t1,class t2>
class myclass{
    public:
        t1 data1;
        t2 data2;
        myclass(t1 a,t2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<"the value of data 1 is "<<this ->data1<<endl;
            cout <<"the value of data 2 is "<<this->data2<<endl;
        }

};

int main(){
    myclass<int,float>obj(1,1.8);
    obj.display();
    return 0;
}