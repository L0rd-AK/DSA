 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
    int data;
    struct node* next;
 };
 int main(){
    int n,value;
    struct node* start;
    start=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Number of Nodes: ");
    scanf("%d",&n);
    printf("Enter %d Nodes: \n",n);
    scanf("%d",&value);
    struct node* temp;
    temp=start;
    temp->data=value;
    for(int i=2;i<=n;i++){
        struct node* NewNode;
        NewNode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&value);
        NewNode->data=value;
        temp->next=NewNode;
        temp=temp->next;
    }
    printf("Elements are: \n");
    temp=start;
    while(n--){
        printf("->%d",temp->data);
        temp=temp->next;
    }
 }