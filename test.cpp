// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node *Left;
//     struct Node *Right;
// }*root=NULL;
// typedef struct Node node;

// node *createNode(int data) {
//     node *temp=(node *)malloc(sizeof(node));
//     temp->data = data;
//     temp->Left = temp->Right = NULL;
//     return temp;
// }

// void printTree(node *root) {
//     if (root == NULL) {
//         return;
//     }
    
//     printTree(root->Left);
//     printf("%d ", root->data);
//     printTree(root->Right);
    
    
// }

// int main() {
//     root=createNode(1);
//     root->Left=createNode(2);
//     root->Right=createNode(3);

//     root->Left->Left=createNode(4);
//     root->Left->Right=createNode(5);

//     root->Right->Left=createNode(6);
//     root->Right->Right=createNode(7);

//     printf("Binary Tree (In-order Traversal): \n");
//     printTree(root);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<long long> v1(n,0),v2(n,0);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=1;i<n;i++)cin>>v2[i];
    long long sum=0;
    for(int i=0;i<n;i++)sum+=v1[i];
    if(sum<0)cout<<"-\n";
    else if(sum>0)cout<<"+\n";
    else cout<<"0\n";
    return 0;
}