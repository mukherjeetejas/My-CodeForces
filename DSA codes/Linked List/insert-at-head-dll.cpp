//Author Tejas Mukherjee
//Implementation of linked list as a structure

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << '\t';
        curr = curr->next;
    }
    cout << '\n';
}

Node *insertatbeg(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    return temp;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp1->prev = head;
    int data;
    printlist(head);
    cout << "insert new head : ";
    cin >> data;
    head = insertatbeg(head, data);
    printlist(head);
}