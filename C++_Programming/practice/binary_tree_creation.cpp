#include <iostream>
#include <algorithm>
#include<climits>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node*left,*right;
        Node(int val){
            data=val;
            left=right=NULL;
        }
};

int main() {
    int x,first,second;
    queue<Node*>q;
    cout<<"enter value for root Node"<<endl;
    cin>>x;
    Node*root=new Node(x);
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        cout<<"enter value for left node"<<endl;
        cin>>first;//left node
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);   
        }
        cout<<"***************************************Node inserted********************************************"<<endl;
        cout<<"enter value for right Node"<<endl;
        cin>>second;//right Node
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
        cout<<"***************************************Node inserted********************************************"<<endl;
    }
    cout<<"Node creation completed"<<endl;
};