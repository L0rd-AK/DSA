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

void printTree(node *root) {
    if (root == NULL) {
        return;
    }
    // Pre-order: root->left->right
    printf("%d ", root->data);
    printTree(root->Left);
    printTree(root->Right);
}

int main() {
     // level-0
    root=createNode(1);//root
    // level-1
    root->Left=createNode(2);
    root->Right=createNode(3);
    // level-2
    root->Left->Left=createNode(4);
    root->Left->Right=createNode(5);

    root->Right->Left=createNode(6);
    root->Right->Right=createNode(7);

    printf("Binary Tree (Pre-order Traversal): \n");
    printTree(root);
    return 0;
}
