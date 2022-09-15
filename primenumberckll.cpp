#include<iostream>
using namespace std;
class prime
{
    public:
    int data;
    prime* next;
};

prime* create(int n)
{
    prime* head=NULL;
    prime* temp=NULL;
    prime* p=NULL;
    prime* tail=NULL;

    int i=0;
    //creating an individual node
    for(i=0;i<n;i++)
    {
        prime* temp=new prime();
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
           tail=tail->next;
           tail->next=head;
        }
    }
    return head;
}
void primeno(prime* head)
{
    prime* p=head;
   
    do
    {
       
        
      if(p->data==2||p->data==3||p->data==5||p->data==7)
        cout<<p->data;
   else if(p->data%2!=0&&p->data%3!=0&&p->data%5!=0&&p->data%7!=0)
    {
        cout<<p->data<<endl;
    }
    p=p->next;
    } while(p!=head);
}
int main()
{
    int n;
    prime* head=NULL;
    cout<<"enter number of nodes"<<endl;
    cin>>n;
    head=create(n);
    primeno(head);
}