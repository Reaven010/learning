#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //for writing in  a file

    string name;
    ofstream out("sample60.txt");
    cout<<"enter your name: ";
    cin>>name;
    out<<"my name is " + name;
    out.close();//frees space

    //for reading a file
    ifstream in("sample60.txt");
    string content;
    getline(in,content);
    cout<<"the content of this file is : \n"<<content;

    return 0;
}