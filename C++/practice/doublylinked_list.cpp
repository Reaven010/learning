#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
    
};
Node*CreateDLL(int arr[],int index,int size,Node*back){
    if(index==size){
        return NULL;
    }
    Node*temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=CreateDLL(arr,index+1,size,temp);
    return temp;
}

void treverse(Node*head){
    Node*temp=head;
    while (temp->next)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

Node* insert_any_where(Node*head,int n,int pos){
    if(pos==0){
        if(head==NULL){
            head=new Node(n);
        }
        else{
            Node*temp=new Node(n);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
    else{
        Node*curr=head;
        while(--pos){
            curr=curr->next;
        }
        if(curr->next==NULL){
            Node*temp=new Node(n);
            curr->next=temp;
            temp->prev=curr;
        }
        else{
            Node*temp=new Node(n);
            temp->prev=curr;
            temp->next=curr->next;
            curr->next->prev=temp;
            curr->next=temp;
        }
    }
}

Node* delete_Node_anywhere(Node*head,int pos){}

int main() {
    int arr[4]={1,2,3,4};
    Node*head=NULL;
    head=CreateDLL(arr,0,4,head);
    cout<<"Linked List created :-"<<endl;
    treverse(head);
    cout<<"after inserrting 5 in second Position :-"<<endl;
    insert_any_where(head,5,2);
    treverse(head);
}