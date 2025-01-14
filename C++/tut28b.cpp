#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public:
    friend void swap(c1 & x,c2 &y);
    void indata(int a){
        val=a;
    }
    void display(void){
        cout<<val<<endl;
    }
};

class c2{
    int val2;
    public:
    friend void swap(c1 & x,c2 &y);

    void indata(int a){
        val2=a;
    }
    void display(void){
        cout<<val2<<endl;
    }
};
void swap(c1 & x,c2 &y){
    int temp=x.val;
    x.val=y.val2;
    y.val2=temp;
}
int main(){
    c1 o1;
    c2 o2;
    o1.indata(34);
    o2.indata(67);
    cout<<"The value of c1 before swapping: "<<endl;
    o1.display();
    cout<<"The value of c2 before swapping: "<<endl;
    o2.display();
    swap(o1,o2);
    cout << "The value of c1 after swapping becomes: "<<endl;
    o1.display();
    cout << "The value of c2 after swapping becomes: "<<endl;
    o2.display();

    return 0;
}