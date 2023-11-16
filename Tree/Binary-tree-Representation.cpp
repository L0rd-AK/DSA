#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *Left;
    struct Node *Right;
}*root=NULL;
typedef struct Node node;

node *createNode(int data) {
    node *temp=(node *)malloc(sizeof(node));
    temp->data = data;
    temp->Left = temp->Right = NULL;
    return temp;
}

int main() {
    root=createNode(1);
    root->Left=createNode(2);
    root->Right=createNode(3);

    root->Left->Left=createNode(4);
    root->Left->Right=createNode(5);

    root->Right->Left=createNode(6);
    root->Right->Right=createNode(7);

    return 0;
}
