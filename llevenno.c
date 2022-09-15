#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void print(struct Node* head)
{
    while(head!=NULL)
    {
        printf("%d\t", head->data);
        head=head->next;
    }
    printf("\n");
}

void even(struct Node* head)
{
    while(head!=NULL)
    {
        if(head->data%2==0)
        printf("%d\t", head->data);
        head=head->next;
    }
}

int prime(struct Node* head)
{

    while(head!=NULL)
    {
        if(head->data%2!=0 && head->data%3!=0 && head->data%5!=0 && head->data%7!=0 && head->data%11!=0 && head->data%13!=0 )
        printf("%d\n", head->data);
        head=head->next;
    }

}

void freq(struct Node* head)
{
    struct Node* p=head->next;
    int count=0;
    while(head!=NULL)
    {
        if(head->data==p->data)
        {
            count++;
        }
        head=head->next;
        p=p->next;
    
    }
    printf("%d\t", count);
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* sec=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=13;
    head->next=sec;

    sec->data=17;
    sec->next=third;

    third->data=55;
    third->next=fourth;

    fourth->data=5677;
    fourth->next=NULL;
     prime(head);
   
    

  

}