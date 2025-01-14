#include<iostream>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
        void initcounter(void) {counter =0;}
        void getPrice(void);
        void setprice(void);
        void changeprice(void);

};

void shop :: setprice(void){
    cout<<"enter id of your item"<<endl;
    cin>>itemid[counter];
    cout<<"enter item price "<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: getPrice(void){
    for (int i =0;i<counter;i++){
        cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
    shop mall;
    mall.initcounter();
    mall.setprice();
    mall.setprice();
    mall.setprice();
    mall.getPrice();
    
    return 0;
}