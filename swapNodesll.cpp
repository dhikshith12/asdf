#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;
};

void swapNodes(Node** head_ref, int x, int y)
{
    if(x == y)
        return;
    Node* prevX = NULL, *currX = *head_ref;
    while(currX && currX->data != x){
        prevX = currX;
        currX = currX->next;
    }

    Node* prevY = NULL, *currY = *head_ref;
    while(currY && currY->data != y){
        prevY = currY;
        currY = currY->next;
    }

    //we didn't found x or y in linkedlist
    if(currX == NULL || currY ==NULL)
        return;

    if(prevX == NULL|| prevY == NULL)
    {
        Node* nextX,*nextY;
        if(prevX == NULL){
            *head_ref = currY;
            nextY = currY->next;
            currY->next = currX->next;
            prevY->next = currX;
            currX->next = nextY;
        }
        else{
            *head_ref = currX;
            nextX = currX->next;
            currX->next = currY->next;
            prevX->next = currY;
            currY->next = nextX;
        }
    }
    else{
        Node* nextY;
            prevX->next = currY;
            nextY = currY->next;
            currY->next = currX->next;
            prevY->next = currX;
            currX->next = nextY;
    }
}
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout<<"\n";
}

int main()
{
    Node* start = NULL;
    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);

    cout << "Linked list before calling swapNodes() \n";
    printList(start);

    swapNodes(&start, 7, 1);

    cout << "Linked list after calling swapNodes() \n";
    printList(start);
    return 0;
}
