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

Node * CreateLinkedList(int arr[],int size,int index=0){
    if (index==size){return NULL;}
    Node *temp= new Node (arr[index]);
    temp->next=CreateLinkedList(arr,size,index+1);
    return temp;
}

bool areIdentical(Node*head1,Node*head2){
    Node*t1=head1;
    Node*t2=head2;
    
    while (t1!=NULL && t2!=NULL){
        if (t1->data !=t2->data){
            return false;
        }
        t1=t1->next;
        t2=t2->next;
    }
    return (t1==NULL && t2==NULL);
}
//reverse
Node *reverse(Node *head){
    Node *curr=head;
    Node *prev=head;
    
    if (head!=NULL){
        while (head->next!=NULL){
            head=head->next;
            curr->next=prev;
            prev=curr;
            curr =head;
        }
        return head;
    }
}

void treverse(Node *head){
    Node *t=head;
    while (t){
        cout<<t->data;
        t=t->next;
    }
}




int main() {
    int arr1[]={1,2,3,5};
    int arr2[]={1,2,3,5};
    Node *head1=CreateLinkedList(arr1,4);
    Node *head2=CreateLinkedList(arr2,4);
    if (areIdentical(head1,head2)){
        cout<<"list is identical"<<endl;
    }
    else{
        cout<<"list is not identical"<<endl;
    }

    head1=reverse(head1);
    treverse(head1);
}