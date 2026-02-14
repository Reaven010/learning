#include<iostream>
#include <fstream>
using namespace std;
/*
the useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream -> derived from fstraeambase
    3. ofstream -> derived from fstreambase
*/
//in order to work with file in c++ ,you will have to open it,thewr are two ways to open a file:
// 1. using the constructor
// 2. using the member function open() of the class
int main(){
    string st = "sayujya tiwari";
    //opening files using constructor and writing it
    ofstream out("sample60.txt");//this helps in performiong write opperation
    out<<st;
    //opening files using constructor and reading it
    string st2;
    ifstream in("sample60b.txt");//this helps in performiong write opperation
    // in>>st2; this will neglet everything after space or enter
    getline(in,st2);
    cout<<st2<<endl;
    cout<<"********************"<<endl;
    getline(in,st2);
    cout<<st2<<endl;

    return 0;
}