#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

// Function to Create Linked-list
void create(int a[],int n){
    int i;
    struct Node *temp,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

//Search function
struct Node* search(struct Node *p,int key){
    while(p!=NULL){
        if(p==NULL) return NULL;
        if(p->data==key) return p;
        else return search(p->next,key);
    }
}

//Main function
int main(){
    int a[]={1,2,3,5,6,7};
    int size=sizeof(a)/sizeof(a[0]);

    create(a,size);

    //============ Searching a key =============
    struct Node *temp=search(first,5);
    if(temp) cout<<"Key Found!"<<endl;
    else cout<<"Key Not Found!"<<endl;

 
    return 0;
}