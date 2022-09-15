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
    ckl* tail=NULL;
    ckl* trav=NULL;

    int i;
    for(i=0;i<n;i++)
    {
        temp=new ckl();
        cout<<"enter data";
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
};
void print(ckl* head)
{
    ckl* p=head;
    do
    {
        cout<<p->data<<endl;
        p=p->next;
    } while (p!=head);
    
}

ckl* deleteall(ckl* head)
{
     ckl* temp=new ckl();
     ckl* current=new ckl();
     current=head->next;
     while(current!=head)
     {
         temp=current;
         current=current->next;
         free(temp);
     }
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
    head=deleteall(head);
  //  print(head);
}