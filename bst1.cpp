#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left, *right;
        Node(int data):data(data),left(NULL),right(NULL)
        {
        }
};

Node* insertNode(Node* root,int key)
{
    if(root==NULL) return new Node(key);

    if(key<root->data)
        root->left = insertNode(root->left,key);
    else
        root->right = insertNode(root->right,key);

    return root;
}

Node* minValueNode(Node* root)
{
    Node* current = root;
    while(current&&current->left!=NULL)
        current = current->left;
    return current;
}

void inorder(Node* root)
{
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

Node* deleteNode(Node* root, int key)
{
    if(root==NULL) return root;

    if(key<root->data)
        root->left = deleteNode(root->left,key);
    else if(key>root->data)
        root->right = deleteNode(root->right,key);
    else
    {
        if(root->left==NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* succ = minValueNode(root);
        root->data = succ->data;
        root->right = deleteNode(root->left,succ->data);
    }
    return root;
}

int main()
{
    Node* root = NULL;
    root = insertNode(root,8);
    root = insertNode(root,3);
    root = insertNode(root,1);
    root = insertNode(root,6);
    root = insertNode(root,7);
    root = insertNode(root,10);
    root = insertNode(root,14);
    root = insertNode(root,4);

    deleteNode(root,10);

    cout<<"Inorder Traversal: \n";
    inorder(root);

}
