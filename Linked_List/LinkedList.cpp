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
// Max number in the Linked-list
int MAX(struct Node *p){
    int temp=0;
    if(p==NULL) return -1;
    temp=MAX(p->next);

    if(temp>p->data) return temp;
    else return p->data;
}
//Search function
struct Node* search(struct Node *p,int key){
    while(p!=NULL){
        if(p==NULL) return NULL;
        if(p->data==key) return p;
        else return search(p->next,key);
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

    // display(first);

    // RecursiveDisplay(first);
    //============ searching for the max number in list =========
    // int x=MAX(first);
    // cout<<x<<endl;
    //============ Searching a key =============
    // struct Node *temp=search(first,14);
    // if(temp) cout<<"Key Found!"<<endl;
    // else cout<<"Key Not Found!"<<endl;
    // =========== Insert Function ===============
    display(first);
    cout<<endl;
    insert(3,9);
    display(first);
    // free();
    return 0;
}