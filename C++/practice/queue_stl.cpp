#include <iostream>
#include <algorithm>
#include<climits>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"size of queue is "<<q.size()<<endl;
    cout<<"last element of queue is "<<q.back()<<endl;

}