#include<iostream>
using namespace std;
class ckl
{
    public:
    int data;
    ckl* next;
};
ckl* create(int n)
{
    ckl* head=NULL;
    ckl* temp=NULL;
    ckl* p=NULL;
     ckl* tail=NULL;
    int i=0;
    for(i=0;i<n;i++)
    {
        ckl* temp=new ckl();
        cout<<"enter data for node no:"<<i+1<<endl;
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=tail->next;
            tail->next=head;
        }
    }
    return head;
}
void print(ckl* head)
{
    ckl* p=head;
    do
    {
        cout<<p->data<<endl;
        p=p->next;
    } while (p!=head);
    
}

ckl* inserthead(ckl* head,int data)
{
    ckl* p=new ckl();
    
    ckl* q=head;
    do
    {
        q=q->next;
    } while (q->next!=head);
    p->next=head;
    head=p;
    p->data=data;
    q->next=p;
    return head;   
}

ckl* insertindex(ckl* head, int data, int index)
{
     ckl* p=new ckl();
     ckl* q=head;
     for(int i=0;i<index-1;i++)
     {
        q=q->next;
     }
     p->next=q->next;
     p->data=data;
     q->next=p;
     return head;
}

ckl* insertend(ckl* head,int data)
{
    ckl* p=new ckl();
    ckl* q=head;
    do
    {
        q=q->next;
    } while (q->next!=head);
    q->next=p;
    p->next=head;
    p->data=data;
    return head;
    
}

ckl* deletehead(ckl* head)
{
    ckl* p=head;
    ckl* q=p->next;
    while(q->next!=head)
    {
        q=q->next;
    }
    q->next=p->next;
    head=q->next;
    free(p);
    return head;

}

ckl* deleteindex(ckl* head,int index)
{
     ckl* p=head;
    ckl* q=p->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

ckl* deleteEnd(ckl* head)
{
     ckl* p=head;
    ckl* q=p->next;
    while(q->next!=head)
    {
        q=q->next;
        p=p->next;
    }
    p->next=head;
    free(q);
    return head;

}

ckl* deleteALL(ckl* head)
{
    ckl* temp=new ckl();
    ckl* p=head;
    do
    {
        temp=p;
        p=p->next;
        free(temp);
    } while (p->next!=head);
    cout<<"deleted";
    
   
}

int main()
{
    int n;
    cout<<"enter nodes"<<endl;
    cin>>n;
    ckl* head=NULL;
    ckl* tail=NULL;
    head=create(n);
    head=deleteALL(head);
  //  print(head);
}






// new

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class cl
{
    public:
    int data;
    cl* next;
}*head,*tail,*trav,*temp;

cl* create(int n)
{
    for(int i=0;i<n;i++)
    {
        temp=new cl();
        cout<<"enter data for node "<<i+1<<endl;
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
           
            tail->next=temp;
            tail=temp;
            tail->next=head;
            
        }
    }
    return head;
}

void print(cl* head)
{
    temp=head;
     do
     {
         
         cout<<temp->data<<endl;
         temp=temp->next;
     }while(temp!=head);
}

cl* inserthead(int data)
{
    temp=new cl();
    temp->next=head;
    head=temp;
    temp->data=data;
    tail->next=head;
    return head;
}

cl* insertindex(int data,int index)
{
    temp=new cl();
    trav=head;
    temp->data=data;
    for(int i=0;i<index-1;i++)
    {
        trav=trav->next;
    }
    temp->next=trav->next;
    trav->next=temp;
    return head;
}

cl* insertend(int data)
{
    temp=new cl();
    tail->next=temp;
    temp->data=data;
    tail=temp;
    tail->next=head;
    return head;
}

cl* insertaftervalue(int data,int value)
{
    temp=new cl();
    temp->data=data;
    trav=head;
   do
   {
      trav=trav->next;
   }while(trav->data!=value);
   temp->next=trav->next;
   trav->next=temp;
   return head;
}

cl* insertbeforevalue(int data,int value)
{
    temp=new cl();
    temp->data=data;
    trav=head;
    cl* travel=trav->next;
    do
    {
        trav=trav->next;
        travel=travel->next;
    }while(travel->data!=value);
    trav->next=temp;
    temp->next=travel;
    return head;
}

cl* deletehead(cl* head)
{
    temp=head;
    head=head->next;
    tail->next=head;
    free(temp);
    return head;
}

cl* deleteindex(int index)
{
    temp=head;
    trav=temp->next;
    int i=0;
    for(i=0;i<index-1;i++)
    {
        trav=trav->next;
        temp=temp->next;
    } 
    
    temp->next=trav->next;
    free(trav);
    return head;
    
}

cl* deleteend(cl* head)
{
    temp=head;
    trav=tail;
    do
    {
        temp=temp->next;
    }while(temp->next!=tail);
    tail=temp;
    tail->next=head;
    free(trav);
    return head;
}

cl* deleteall(cl* head)
{
temp=new cl();
trav=head;
    do
    {
        temp=trav;
        trav=trav->next;
        free(temp);
    }while(trav->next!=head);
    cout<<"deleted";
}

cl* deletevalue(int value)
{
    temp=head;
    trav=temp->next;
    do
    {
        temp=temp->next;
         trav=trav->next;
    }while(trav->data!=value);
    temp->next=trav->next;
    free(trav);
    return head;
}

int main() {
   int n;
   cout<<"enter the number of nodes"<<endl;
   cin>>n;
   head=create(n);
   head=deletevalue(33);
   print(head);

    return 0;
}