#include <stdio.h>
//Global variable
int stack[100],top=-1,n,temp;
void push(int e){
    //checking Stack-overflow
    if(top+1==n) printf("\n!!!!!!Stack-Overflow!!!!!!\n");
    else{
        top++;
        stack[top]=e;
        printf("%d Pushed successfully.\n",stack[top]);
    }
}
void pop(){
    //Checking Stack-underflow
    if(top==-1) printf("\n!!!!!!Stack-underflow!!!!!!\n");
    else{
        //stack[top]=0;
        printf("%d poped successfully.\n",stack[top]);
        top--;
    }
}
void show(){
    if(top==-1){ printf("Stack is Empty"); return;}
    printf("Stack: ");
    for(int i=top;i>=0;i--) printf("%d ",stack[i]);
}
//Main func...
int main(){
    printf("Enter Size: ");
    scanf("%d",&n);
    do{
        printf("\n***Enter choice***\n1. Push\n2. Pop\n3. Show Stack\n4. Exit\n");
        scanf("%d",&temp);
        if(temp==1){
            int x;
            printf("Enterr the element You want to push: ");
            scanf("%d",&x);
            push(x);}
        else if(temp==2) pop();
        else if(temp==3) show();
        //else printf("Invalid");


    }while(temp!=4);
}