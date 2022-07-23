#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* insertAtFirst(int data, struct Node* head)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct Node* insertAtIndex(int data, struct Node* head, int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}

struct Node* InsertAtEnd(int data, struct Node* head)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node* AfterNode(int data, struct Node* head, struct Node* prevNode)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

void print(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        
        ptr=ptr->next;
    }
    printf("\n");
}


struct Node* deletefirst(struct Node* head)
{
   struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    //struct Node* 
    ptr=head;
    head=head->next;
    free(ptr);
  return head;

}

struct Node* deleteAtIndex(struct Node* head, int index)
{
    struct Node* p=head;
    struct Node* q=p->next;
    for(int i=0;i<index-1;i++)
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
    struct Node* q=head->next;
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
    struct Node* q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data=8;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=90;
    third->next=fourth;

    fourth->data=89;
    fourth->next=NULL;

  //  print(head);
  //  head=AfterNode(34,head,third);
  //  print(head);
  //  head=deletefirst(head);
    //print(head);
   // head=deleteAtIndex(head,2);
   // print(head);
  // head=deleteAtEnd(head);
   //print(head);
   head=deleteAtValue(head,9);
   print(head);
}