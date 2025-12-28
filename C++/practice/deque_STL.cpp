#include <iostream>
#include <algorithm>
#include<climits>
#include<deque>
using namespace std;

int main() {
    deque<int>d;
    d.push_front(10);
    d.push_back(30);
    d.push_front(5);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<"current size of deque is"<<d.size()<<endl;
    d.clear();//empty deque
    cout<<boolalpha<<d.empty()<<endl;
};