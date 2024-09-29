#include<stdio.h>
#define max 500
int stack[max],n,top=-1;

void push();
void pop();
void display();
void peek();

int main()
{
    int choice=0;
    printf("enter the number of elements in the stack");
    scanf("%d",&n);
    while(1)
    {
        printf("\n1.push\n2.pop\n3.display\n4.peek\n5.exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                return 0;
            default:
                printf("please enter valid choice\n");
        }
    }
}
void push()
{
    int val;
    if(top==n-1)
    {
        printf("\nstack overflow");
    }
    else
    {
        printf("\nenter the value you want to push in stack");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{   
    int del;
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        del=stack[top];
        top=top-1;
        printf("%ddeleted successfully",del);
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top==-1)
    {
        printf("stack is empty");
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("top is:%d",stack[top]);
    }
}