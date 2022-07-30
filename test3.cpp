#include <iostream>
using namespace std;

class node
{
    int data;
    human a;
public:

};


class human
{
    int data;

public:

};



void printTree(node *ptr)
{
    if (!ptr)
    {
        return;
    }
    printTree(ptr->left);
    cout << ptr->data;
    printTree(ptr->right);
    return;
}

int main()
{
    node *head = new node(0);
    head->left = new node(1);
    head->right = new node(2);
    head->left->left = new node(3);
    head->left->right = new node(4);
    head->right->left = new node(5);
    head->right->right = new node(6);
    printTree(head);

    return 0;
}