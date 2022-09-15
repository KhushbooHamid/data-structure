#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* create(int n)
{
    struct Node* head=NULL;
    struct Node* temp=NULL;
    struct Node* p=NULL;
    int i;
    for(int i=0;i<n;i++)
    {
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        printf("enter data for node no %d:", i + 1);
        scanf("%d", &(temp->data));
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=temp;
            temp->next=NULL;
        }
    }
    return head;
}

void prime(struct Node* head, int limit)
{
    int i,count=0;
    struct Node* p=head;
    while(p->next!=NULL)
    {
    for(i=1;i<=limit;i++)
    {
        if(p->data%i==0)
        count++;
         p=p->next;
    }
    if(count==2)
    printf("%d\n", p->data);
    }
}

void view(struct Node* head)
{
    struct Node* p=head;
    while(p!=NULL)
    {
        printf("%d\n",(p->data));
        p=p->next;
    }

}



int main()
{
    int n=0;
    printf("enter how many nodes");
    scanf("%d", &n);
    struct Node* head=NULL;
     head=create(n);
 //  view(head);
   prime(head, 200);
}