#include <iostream>
using namespace std;
class doubly
{
    public:
    doubly* prev;
    int data;
    doubly* next;
}*head,*trav,*temp,*current=NULL,*ind=NULL;

doubly* create(int n)
{
    for(int i=0;i<n;i++)
    {
        temp=new doubly();
        temp->prev=NULL;
        temp->next=NULL;
        cout<<"enter the data";
        cin>>temp->data;
        if(head==NULL)
        head=temp;
        else
        {
            trav=head;
            while(trav->next!=NULL)
            {
                trav=trav->next;
            }
            trav->next=temp;
            temp->prev=trav;
            temp->next=NULL;
        }
    }
    return head;
}
void print(doubly* head)
{
    trav=head;
    while(trav!=NULL)
    {
        cout<<trav->data<<endl;
        trav=trav->next;
        
    }
}
/*
doubly* bs()
{
  
    
    trav=head;
    temp=;
    while(trav->next!=NULL)
    {
        while(temp!=p)
        {
            temp=temp->next;
            p=p->prev;
            if(temp->data>temp->next->data)
            {
                q->data=temp->data;
                temp->data=temp->next->data;
                temp->next->data=q->data;
            }
        }
        trav=trav->next;
    }
    
}
*/

void sort()
{
   int tem;
   for(current=head;current->next!=NULL;current=current->next)
   {
       for(ind=current->next;ind!=NULL;ind=ind->next)
    {
        if(current->data>ind->data)
        {
        tem=current->data;
        current->data=ind->data;
        ind->data=tem;
        }

    }
   }
}

int main() {
   int n;
   cout<<"enter n";
   cin>>n;
   head=create(n);
 //  head=inserthead(34);
 //    rev(&head);
// bs();
sort();
   print(head);

    return 0;
}
