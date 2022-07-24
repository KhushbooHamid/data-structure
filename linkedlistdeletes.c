#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node* next;
};
struct Node* deleteAtHead(struct Node* head)
{
    struct Node* p=head;
    head=head->next;
    free(p);
    return head;
}

struct Node* deleteAtIndex(struct Node* head, int index)
{
    struct Node* p=head;
    struct Node* q=p->next;
    int i;
    for (i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
        
    }
    p->next=q->next;
    free(q);
    return head;

}

struct Node* deleteAtEnd(struct Node* head)
{
    struct Node* p=head;
    struct Node* q=p->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}

struct Node* deleteAtValue(struct Node* head, int value)
{
    struct Node* p=head;
    struct Node* q=p->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=   q->next;
        free(q);
    }
    return head;
    
}
void print(struct Node* head)
{
    while(head!=NULL)
    {
        printf("%d\t", head->data);
        head=head->next;
    }
    printf("\n");
}


int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=12;
    head->next=sec;

    sec->data=67;
    sec->next=third;

    third->data=89;
    third->next=fourth;

    fourth->data=99;
    fourth->next=NULL;

    head=deleteAtIndex(head,2);
    print(head);
}