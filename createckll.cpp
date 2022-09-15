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
        cout<<p->data;
        p=p->next;
    } while (p!=head);
    
}
int main()
{
    int n;
    cout<<"enter nodes"<<endl;
    cin>>n;
    ckl* head=new ckl();
    head=create(n);
    print(head);
}