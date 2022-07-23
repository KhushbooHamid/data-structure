#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* insertAtFirst(struct Node* head,int data)
{
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    p->data=data;
    p->next=head;
    return p;
    
}

struct Node* insertAtIndex(struct Node* head, int data, int index)
{
     struct Node* q=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    q->next=p->next;
    p->next=q;
    q->data=data;
    return head;
    
}

struct Node* insertAtEnd(struct Node* head,int data)
{
    struct Node* q=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    q->next=p->next;
    p->next=   q;
    q->data=data;
    return head;
}

struct Node* insertAfterNode(struct Node* head, int data, struct Node* prevNode)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

void print(struct Node* p)
{
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
  //  struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=90;
    head->next=sec;

    sec->data=98;
    sec->next=third;

    third->data=99;
    third->next=NULL;

    head=insertAfterNode(head,567,sec);
    print(head);
}