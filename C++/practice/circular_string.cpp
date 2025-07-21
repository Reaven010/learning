#include <iostream>
#include <algorithm>
#include<climits>
#include<vector>
#include<string>
using namespace std;
void find_lsp(vector<int>&lsp,string s){
    int first=0,second=1;
    while(second<s.size()){
        if(s[first]==s[second]){
            lsp[second]=first+1;
            first++,second++;
        }
        else{
            if(first==0){
                second++;
            }
            else{
                first=lsp[second-1];
            }
        }
    }
}

//a is main string and b is substring


bool is_circular_string(string a,string b){
    a+=a;
    vector<int>lsp(b.size(),0);
    find_lsp(lsp,b);
    int first=0,second=0;
    while(first<a.size() && second<b.size()){
        if (a[first]==b[second]){
            first++,second++;
        }
        else{
            if (second==0){
                first++;
            }
            else{
                second=lsp[second-1];
            }
        }
        if(second==b.size()){
            return true;
        }
    }
    return false;
}