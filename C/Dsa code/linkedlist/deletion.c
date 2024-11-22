#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void linkedlisttraversal(struct node* ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

    struct node* deletefirst(struct node* head){
        struct node*ptr=head;
        head=head->next;
        free(ptr);
        return head;
    }

    struct node*deleteatindex(struct node* head,int index){
        struct node*p=head;
        struct node*q=head->next;
        int i=0;
        while(i!=index-1){
            p=p->next;
            q=q->next;
            i++;
        }
        p->next=q->next;
        free(q);
        return head;
    }

    struct node*deleteatend(struct node* head,int index){
        struct node*p=head;
        struct node*q=head->next;
        while(q->next!=NULL){
            p=p->next;
            q=q->next;
        }
        p->next=NULL;
        free(q);
        return head;
    }

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;

    // allocate memory in heap
    head=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));

    // link first and second node
    head->data =7;
    head->next=second;

    // link second and third node
    second->data =11;
    second ->next=third;

    // terminate the list at third node
    third -> data= 66;
    third->next=NULL;
    printf("linkedlist before deletion\n ");
    linkedlisttraversal(head);

    // head=deletefirst(head);
    head=deleteatindex(head,2);
    printf("linkedlist before deletion ");
    linkedlisttraversal(head);
    return 0;
}