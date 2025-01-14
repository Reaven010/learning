//array
#include <iostream>
using namespace std;
int main(){
    int marks[4]={23,24,25,26};
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // int mathmarks[4];
    // mathmarks[0]=20;
    // mathmarks[1]=80;
    // mathmarks[2]=60;
    // mathmarks[3]=58;
    // cout<<"these are mathmarks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // *******************for loop**********************************

    // cout<<"using for loop"<<endl;
    // for (int i=0;i<4;i++)
    // {
    //     cout<<"value of marks "<<i<<marks[i]<<endl;
    // }

    // ********************while loop*******************************

    // cout<<"using while loop"<<endl;
    // int i=0;
    // while(i<4)
    // {
    //     cout<<"value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // ********************dowhile loop****************************
    // int i=0;
    // do{
    //     cout<<"value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    // while(i<4);
    //pointers in array
    int* p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}