#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;
    public:
        void read(void);
        void chk_binary(void);
        void complement(void);
        void display(void);

};
void binary :: read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_binary(void){
    for (int i=0;i<s.length();i++){
        if (s.at(i) != '0'&&s.at(i) != '1')
        {
            cout<<"not binary number"<<endl;
        }
    }
}
void binary :: complement(void)
{
    chk_binary();
    for (int i=0;i<s.length();i++){
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
}
void binary :: display(void){
    cout<<"displaying your binary number"<<endl;
    for (int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    binary b;
    b.read();
    //b.chk_binary();
    b.display();
    b.complement();
    b.display();

    return 0;
}