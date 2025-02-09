#include<iostream>
using namespace std;

char convert(char a ){
    char answer;
    answer = a-'a'+'A';
    return answer;

}

int main(){
    char name;
    cout<<"enter a character ";
    cin>>name;
    cout<<convert(name);
    return 0;
}