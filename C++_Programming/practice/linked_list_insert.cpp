#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int data ;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};

int main() {
    Node *Head =NULL;
    int arr[]={2,34,4,5};
    for (int i=0;i<4;i++){
    if (Head ==NULL){
            Head =new Node (arr[i]);
        }
        else{
            Node *temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }

    Node *t1=Head;
    while(t1){
        cout<<t1->data<<" ";
        t1=t1->next;
    }
}