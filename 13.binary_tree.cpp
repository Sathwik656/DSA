#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};
//create 
Node* newNode(int val){
    Node* node = new Node();
    node -> data = val;
    node -> left = node -> right = NULL;
    return node;
}
//inorder
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//preorder
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//porstorder
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout<<"Inorder: ";
    inorder(root);
    cout<<"\nPreorder: ";
    preorder(root);
    cout<<"\nPostorder: ";
    postorder(root);
}

