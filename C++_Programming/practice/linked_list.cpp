#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

struct linked_list
{
    /* data */
    int roll;
    char name[30];
    struct linked_list * next;
};
struct node{
    int data;
    struct node *nextnode;
};

void createlist(int n){
    struct node*newnode,*temp;
    int data,i;
    newnode = (struct node *)malloc(sizeof(struct node));
}
int main() {
    struct linked_list n1,n2,n3;
    cout<<"enter details of students in following secuence rollno. name "<<endl;
    cout<<"for student 1"<<endl;
    cin>>n1.roll>>n1.name;
    cout<<"for student 2"<<endl;
    cin>>n2.roll>>n2.name;
    cout<<"for student 3"<<endl;
    cin>>n3.roll>>n3.name;
    n1.next =&n2;
    n2.next=&n3;
    n3.next=NULL;

    //accessing linked list
    struct linked_list *p=&n1;
    cout<<"list of student is "<<endl;
    while(p!=NULL){
        cout<<"roll no : "<<p->roll<<" name "<<p->name<<endl;
        p=p->next;
    }



    
}