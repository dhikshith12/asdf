#include<iostream>
using namespace std;

class Node{
public:
    int item;
    Node* left,*right;
    Node(int item):item(item)
    {
        left = NULL;
        right = NULL;
    }
};


bool checkHeightBalance(Node* root, int& height)
{
    int leftHeight = 0, rightHeight = 0;
    int l = 0, r = 0;

    if (root == NULL){
        height = 0;
        return 1;
    }
    l = checkHeightBalance(root->left, leftHeight);
    r = checkHeightBalance(root->right, rightHeight);

    height = (leftHeight>rightHeight?leftHeight:rightHeight) + 1;

    if(abs(leftHeight-rightHeight)>=2)
        return 0;
    else
        return l&&r;
}

