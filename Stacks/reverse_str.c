#include<stdio.h>
#include<string.h>
int top=-1,n=100;
char stack[100];
void push(char e){
    //checking Stack-overflow
    if(top+1==n) printf("Stack-Overflow\n");
    else{
        top++;
        stack[top]=e;
        n=top;
        //printf("%c Pushed successfully.\n",stack[top]);
    }
}
char pop(){
    //Checking Stack-underflow
    if(top==-1) printf("Stack-underflow\n");
    else{
        //stack[top]=0;
        //printf("%c poped successfully.\n",stack[top]);
        return stack[top--];
    }
}
void show(){
    printf("top: %d\n",top);
    if(top==-1) printf("Stack is Empty");
    for(int i=0;i<=n;i++) printf("%c ",pop());
}
int main(){
    char s[100];int temp;
    printf("Enter the string: ");
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++) push(s[i]);
    printf("\nChoose one option\n1. Show String.\n2. Reverse String.\n");
    scanf("%d",&temp);
    if(temp==1) printf("%s",s);
    else show();

}