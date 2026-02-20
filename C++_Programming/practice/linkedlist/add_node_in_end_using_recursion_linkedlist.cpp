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

Node * CreateLinkedListStart(int arr[],int size,Node*prev=NULL,int index=0){
    if (index==size){return prev;}
    Node * temp=new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedListStart(arr,size,temp,index+1);
}

void treverse (Node *head){
    Node *temp=head;
    while (temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert(Node *head,int x,int value){
    Node *temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }
    Node * t1=new Node(value);
    t1->next=temp->next;
    temp->next=t1;
}

void deleteNodeStart(Node *&head){
    if (head!=NULL){
        Node * temp=head;
        head=head->next;
        delete temp;
    }
}

void deleteNodeEnd(Node *&head){
    if (head!=NULL){//make sure list exist
        if (head->next==NULL){//if list has only 1 node
            Node * temp =head;
            head=NULL;
            delete temp;
        }
        else {//more then onew node
        Node *temp=head;
        Node *prev=NULL;
        while (temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        delete temp;
        prev->next=NULL;
        }
    
    }
}

void deleteNode(Node *&head,int x){
    if (x==1){
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    else{
        Node * current =head;
        Node * prev =NULL;
        x--;
        while(x){
            prev=current;
            current=current->next;
            x--;
        }
        prev->next=current->next;
        delete current;
    }
}

void Min(Node *head){
    Node *temp=head;
    int ans =temp->data;
    while (temp->next!=NULL){
        ans =min(ans,temp->data);
        temp=temp->next;
    };
    cout<<"minimum is : "<<ans<<endl;
}


int main() {
    int arr[]={12,2,45,76,34};
    Node * head=CreateLinkedList(arr,5);
    // Node *head=CreateLinkedListStart(arr,5);

    treverse(head);
    int x=3;
    int value=10;
    insert(head,x,value);
    treverse(head);
    deleteNodeStart(head);
    treverse(head);
    deleteNodeEnd(head);
    treverse(head);
    deleteNode(head,2);
    treverse(head);
    Min(head);
}