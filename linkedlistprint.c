#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n"); 
}
int main()
{
    struct Node* head;
    struct Node* sec;
    struct Node* third;

    head=(struct Node*)malloc(sizeof(struct Node));
    sec=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));


    head->data=9;
    head->next=sec;

    sec->data=89;
    sec->next=third;

    third->data=90;
    third->next=NULL;

    print(head);

}