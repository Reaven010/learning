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
Node *head=NULL;
int arr[]={12,22,3,45,46,84,4};

//adding to the end

for(int i=0;i<7;i++){
    if (head==NULL){
        head =new Node(arr[i]);
    }
    else{
        Node *tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        Node *temp = new Node(arr[i]);
        tail->next=temp;
    }
}

//treversing

Node *t1=head;
while(t1){
    cout<<t1->data<<"   ";
    t1=t1->next;
}

}