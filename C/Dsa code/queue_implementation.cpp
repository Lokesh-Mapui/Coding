#include<stdio.h>

void enqueue();
void dequeue();
void display();
void peek();

int arr[200];
int front=-1;
int rear=-1;
int size;

int main()
{
    int ch;
    printf("enter the size of queue");
    scanf("%d",&size);
    while(1)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.peek\n5.exit");
        printf("\nenter the choice of operation:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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
                printf("please enter valid choice");
        }
    }
}

void enqueue()
{
    int item;
    if(rear==size-1)
    {
        printf("queue overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("enter the elements you want to push in queue");
        scanf("%d",&item);
        rear=rear+1;
        arr[rear]=item;
    }
}

void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("queue underflow");
    }
    else
    {
        printf("%d deleted sucessfully",arr[front]);
        front=front+1;
    }
}

void display()
{
    if(front==-1||front>rear)
    {
        printf("queue underflow");
    }
    else
    {
        printf("queue:");
        for(int i=front;i<=rear;i++)
        {
            printf(" %d ",arr[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if(front==-1||front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d",arr[front]);
    }
}