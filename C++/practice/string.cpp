#include <iostream>
#include <algorithm>
#include<climits>
#include <string>
#include <vector>
using namespace std;

void rotate_clockwise(string &s){
    char temp = s.size()-1;
    for (int i=s.size()-2;i>=0;i--){
        s[i]=s[i-1];
    }
    s[0]=temp;
}

void rotate_anticlockwise(string &s){
    char temp =s[0];
    for(int i=1;i<s.size();i++){
        s[i]=s[i+1];
    }
    s[s.size()-1]=temp;
}

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

    //rotation of string
    s1="amazon";
    s2="azonam";
    if (s1.size()!=s2.size()){return 0;}
        char temp;
        
        //repeate twice
        for (int count=0;count<2;count++){
            //rotate clockwise once  
            temp=s1[s1.size()-1];
            int index=s1.size()-1;
            while (index>0){
                s1[index]=s1[index-1];
                index--;
                
            }
            s1[0]=temp;
            cout<<"colckwise "<<s1<<endl;
        }
        if (s1==s2){
            cout<<"clockwise rotation"<<endl;
        }
        for (int count =0;count<4;count++){
            //rotate anticlockwise once
            temp=s1[0];
            int index=0;
            while (index<=s1.size()-1){
                s1[index]=s1[index+1];
                index++;
            }
            s1[s1.size()-1]=temp;
            cout<<"anticlockwise "<<s1<<endl;
        }
        if (s1==s2){
            cout<<"anticlockwise rotation"<<endl;
        }

        //panagram
        cout<<"panagram"<<endl;
        string sentence ="thequickbrownfoxjumpsoverthelazydog";
        vector<int> lower(26,0);
        for (int i=0;i<sentence.size();i++){
            lower[sentence[i]-'a']++;
        }
        for (int i=0;i<26;i++){
            cout<<lower[i]<<" ";
            if (lower[i]==0){
                return 1;
            }
        }
        return 0;
    }