#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    // char arr[20];
    // cin >>arr;//on pressing enter, it will stop taking input
    // arr[2]='\0';//null character '\0'
    //getline(); getline will take input with spaces and tabs
    // cout<<arr<<endl; 

    // string s;
    // getline(cin,s);//getline will take input with spaces and tabs
    // cout<<s<<endl;
    // cout<<s.size()<<endl;//size of string

    string s1 = "hello",s2 = "world",s3;
    // s3=s1+s2;
    s3=s1.append(s2);//append function
    s1.push_back('p');//push_back functio
    s1.pop_back();//pop_back function
    cout<<s3<<endl;
    //escape characters using \ makes it skip \ and print character next to it
    s3 = "hello\nworld";//\n is used to print in new line
    cout<<s3<<endl;
    //reversing a string
     int start=0,end=s2.size()-1;
     while(start<end){
        swap(s2[start],s2[end]);
        start++;
        end--;
     }
     cout<<s2<<endl;

     //palindrome
     string s4= "nayan";
    start=0;end=s4.size()-1;
    while (start<end){
        if (s4[start]!=s4[end]){
            cout<<"not a palindrome"<<endl;
            break;
        }
        start++;
        end--;
        
    }
     cout<<"palindrome"<<endl;
}