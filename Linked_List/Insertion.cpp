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
// Display Function
void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
//Recursive display
void RecursiveDisplay(struct Node *p){
    if(p!=NULL){
        RecursiveDisplay(p->next);
        cout<<p->data<<" ";
    }
}
//Insertion function
void insert(int pos,int dta){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=dta;
    if(pos==0){
        temp->next=first;
        first=temp;
    }else if(pos>0){
        struct Node *p;
        p=first;
        for(int i=0;i<pos-1;i++) p=p->next;
        temp->next=p->next;
        p->next=temp;
    }
}
//Main function
int main(){
    int a[]={1,2,3,5,6,7};
    int size=sizeof(a)/sizeof(a[0]);

    create(a,size);
    // =========== Insert Function ===============
    display(first);
    cout<<endl;
    insert(3,9);
    display(first);
    
    return 0;
}