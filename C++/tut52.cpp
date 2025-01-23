#include<iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
        void setdata(int a ,float b){
            id =a ;
            price = b;
        }
        void getdata(){
            cout<<"the code of the item is "<<id<<endl;
            cout <<"the price of the iteam is "<<price<<endl;
        }
};
int main(){
    int size,i;
    int p;
    float q;
    cout<<"enter how many items in shop"<<endl;
    cin>>size;
    shopitem *ptr=new shopitem[size];
    shopitem *temp=ptr;
    for (i =0 ;i<size;i++){
        cout<<"enter id and price of item"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (i=0;i<size;i++){
        cout <<"id and price of item"<<i+1<<endl;
        temp->getdata();
        temp++;
    }
    return 0;
}