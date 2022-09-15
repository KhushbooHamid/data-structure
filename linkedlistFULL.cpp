#include<iostream>
using namespace std;
class ll
{
    public:
    int data;
    ll* next;
};
ll* create(int n)
{
    ll* head=NULL;
    ll* temp=NULL;
    ll* p=NULL;
    int i;
    for(i=0;i<n;i++)
    {
        ll* temp=new ll();
        cout<<"enter data for node no "<<i+1<<":"<<endl;
        cin>>temp->data;
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
void print(ll* head)
{
    ll* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

ll* inserthead(ll* head,int data)
{
    ll* newnode=new ll();
    newnode->data=data;
    newnode->next=head;
    
    return newnode;
}

ll* insertIndex(ll* head, int data, int index)
{
    ll* ptr=new ll();
    ll* p=head;
    ptr->data=data;
    int i=0;
    while(i!=index-1)
    {
       
        p=p->next;
         i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}

ll* insertEnd(ll* head, int data)
{
    ll* ptr=new ll();
    ll* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    return head;
}

ll* insertBef(ll* head, int nextnode, int data)
{
    ll* ptr=new ll();
    ll* p=head;
    while(p->data!=nextnode)
    {
        p=p->next;
    }
    ptr->next=p->next;
    ptr->data=data;
    p->next=ptr;
    return head;
}

ll* insertAft(ll* head, int prevnode, int data)
{
    ll* ptr=new ll();
    ll* p=head;
    while(p->data==prevnode)
    {
        p=p->next;
    }
    ptr->next=p->next;
    ptr->data=data;
    p->next=ptr;
    return head;
}

ll* deletehead(ll* head)
{
    ll* p=head;
    head=head->next;
    free(p);
    return head;
}

ll* deleteIndex(ll* head, int index)
{
    ll* p=head;
   ll*  trav=p->next;
    int i;
   for(i=0;i<index-1;i++)
    {
        p=p->next;
        trav=trav->next;
     
        
    }
     
    p->next=trav->next;
    free(trav);
    return head;
    
    
}

ll* deleteEnd(ll* head)
{
    ll* p=head;
    ll* q=p->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    
}

ll* deleteall(ll* head)
{
    ll* trav=head;
   ll* temp=new ll();
   while(trav!=NULL)
   {
    temp=trav;
    trav=trav->next;
    free(temp);
   }
   cout<<"deleted";
}

ll* deleteval(ll* head, int value)
{
    ll* p=head;
    ll* q=p->next;
    while(q->data!=value&&q->next!=NULL)
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

ll* deles(ll* head)
{
    ll* temp=new ll();
    while(head!=NULL)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    cout<<"deleted";
}

int main()
{
    int n;
    cout<<"enter number of nodes";
    cin>>n;
    ll* head=new ll();
    head=create(n);
//    print(head);

   head= deleteall(head);
  // print(head);
}