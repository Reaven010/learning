#include <iostream>
#include <algorithm>
#include<climits>
#include<stack>
using namespace std;

int main() {
    stack<int>s;
    s.push(3);
    s.push(31);
    s.push(33);
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.empty();

}