// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class ll
{
    public:
  int data;
  ll* next;
};

ll* create(int n)
{
  ll*  head=NULL;
    ll* temp=NULL;
    ll* trav=NULL;
    for(int i=0;i<n;i++)
    {
        temp=new ll();
        cout<<"enter value";
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            trav=head;
            while(trav->next!=NULL)
            {
                trav=trav->next;
            }
            trav->next=temp;
            temp->next=NULL;
        }
    }
    return head;
}

ll* inserthead(ll* head,int data)
{
    ll* temp=new ll();
    temp->data=data;
    temp->next=head;
    head=temp;
    return head;
}

ll* insertindex(ll* head,int data,int index)
{
    ll* temp=new ll();
    ll* trav=head;
    temp->data=data;
    int i=0;

 for(i=0;i<index-1;i++)
    {
        trav=trav->next;
 
    }
    temp->next=trav->next;
    trav->next=temp;
    return head;
}
ll* insertend(ll* head,int data)
{
    ll* temp=new ll();
    temp->data=data;
    ll* trav=head;
    while(trav->next!=NULL)
    {
        trav=trav->next;
    }
    trav->next=temp;
    temp->next=NULL;
    return head;
    
}

ll* insertaftervalue(ll* head,int data, int value)
{
     ll* temp=new ll();
     ll* trav=new ll();
  
     trav=head;
     
     while(trav->data!=value)
     {
         trav=trav->next;
     }
   
     temp->next=trav->next;
     temp->data=data;
     trav->next=temp;
     return head;
     
}


ll* insertbeforevalue(ll* head,int data, int value)
{
     ll* temp=new ll();
     ll* trav=new ll();
     ll* travel=new ll();
     travel=head;
     trav=travel->next;
     while(trav->data!=value)
     {
         trav=trav->next;
         travel=travel->next;
     }
     
     temp->next=travel->next;
     temp->data=data;
     travel->next=temp;
     return head;
     
}

ll* deletehead(ll* head)
{
    ll* temp=head;
    head=temp->next;
    free(temp);
    return head;
}

ll* deleteindex(ll* head,int index)
{
    ll* temp=head;
    ll* trav=temp->next;
    int i=0;
    while(i!=index-1)
    {
        temp=temp->next;
        trav=trav->next;
        i++;
    }
    temp->next=trav->next;
    free(trav);
    return head;
    
}

ll* deleteend(ll* head)
{
   
    ll* trav=head;
     ll* temp=trav->next;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        trav=trav->next;
    }
    trav->next=NULL;
    free(temp);
    return head;
    
}

ll* deleteatvalue(ll* head,int value)
{
    ll* trav=head;
    ll* temp=trav->next;
    while(temp->data!=value)
    {
        temp=temp->next;
        trav=trav->next;
    }
    trav->next=temp->next;
    free(temp);
    return head;
    
}

void printeven(ll* head)
{
    ll* temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}

void printprime(ll* head)
{
      ll* temp=head;
    while(temp!=NULL)
    {
         if(temp->data==2||temp->data==3||temp->data==5||temp->data==7)
        cout<<temp->data;
   else if(temp->data%2!=0&&temp->data%3!=0&&temp->data%5!=0&&temp->data%7!=0)
        {
            cout<<temp->data;
        }
        temp=temp->next;
    }
}

void print(ll* head)
{
    ll* temp=head;
    while(temp!=  NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main() {
    
   ll* head=new ll();;
    int n;
    cout<<"enter the number of nodes";
    cin>>n;
  
    head=create(n);
  //head=deleteatvalue(head,33);
   printprime(head);
 
}