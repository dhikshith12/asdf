#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data): data(data)
    {
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    LinkedList() { head = NULL; }

    void reverse()
    {
        Node* current = head;
        Node* prev = NULL, *next = NULL;

        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void print()
    {
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<" ";
            temp = temp->next;
        }
    }
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

};


int main()
{
    LinkedList l1;
    int n;
    cin>>n;
    while(n--){
        int t; cin>>t;
        l1.push(t);
    }
    l1.print();

    l1.reverse();
    cout<< "\n Reversed Linked List \n";
    l1.print();
    return 0;
}




