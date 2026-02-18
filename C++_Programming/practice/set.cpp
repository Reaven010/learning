#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class person{
    public:
        int age;
        string name;
        bool operator <(const person&other)const{
            return age<other.age;
        }
};

int main() {
    set<person>s;
    person p;
    p.age=20,p.name="sayu";
    s.insert(p);
    for (auto it=s.begin();it!=s.end();it++){
        cout<<it->age<<"\n";
        cout<<it->name<<"\n";
        
    }
    
}