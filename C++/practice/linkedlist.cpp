#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int main() {
    Node *head;
    head= new Node(4);
    cout<<head<<endl<<head->data<<endl<<head->next;
}