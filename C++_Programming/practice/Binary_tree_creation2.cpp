#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    Node*left,*right;
    int data;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
Node * binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node*temp=new Node(x);
    cout<<"left Node of "<<temp->data<<" : ";
    temp->left=binarytree();
    cout<<"right Node of "<<temp->data<<" : ";
    temp->right=binarytree();
    return temp;
}
void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node*root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    cout<<"enter root node "<<" : ";
    Node *root=binarytree();
    cout<<"binary tree creation complete"<<endl;
    cout<<"inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"postorder : ";
    postorder(root);
    cout<<endl;
}