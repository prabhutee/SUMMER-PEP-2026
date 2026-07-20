#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;


    
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}