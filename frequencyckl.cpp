#include<iostream>
using namespace std;

class freq
{
    public:
    int data;
    freq* next;
};

freq* create(int n)
{
    freq* head=NULL;
    freq* temp=NULL;
    freq* p=NULL;
    int i=0;
    for(i=0;i<n;i++)
    {
        freq* temp=new freq();
        cout<<"enter the data for node "<<i+1<<endl;
        cin>>temp->data;
        temp->next=head;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            p=head;
            do
            {
                p=p->next;
            }while(p!=head);
            p->next=temp;
            temp->next=head;
        }
    }
return head;
}

int counter(freq* tail, int x)
{
    freq* p=tail->next;
    int count=0;
    while(p!=tail)
    {
        if(p->data==x)
        count++;
        p=p->next;

    } 
    count++;
    return count;

}

int main()
{
    int n,m;
    cout<<"enter number of nodes"<<endl;
    cin>>n;
    freq* head=NULL;
    head=create(n);
   m= counter(head,6);
cout<<"count is "<<m;
    return 0;
}