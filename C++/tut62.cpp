#include<iostream>
#include<fstream>

using namespace std;
// opening using member function 
int main(){
    //ofstream
    // ofstream out;
    // out.open("sample60.txt");
    // out<<"this is me";
    // out.close();
    //ifstream
    ifstream in;
    string st,st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    while (in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }

    return 0;
}