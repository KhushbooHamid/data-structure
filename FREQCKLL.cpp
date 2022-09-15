#include<iostream>
using namespace std;
#define length 100
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


/////////////////////////


int counter(ckl* head)
{
    ckl* p=head;
    int count=0,nodeval,position[length],pos=0;
    cout<<"enter the value you want to find";
    cin>>nodeval;
   do
    {
        if(p->data==nodeval)
        {
        count++;
        position[count]=pos;
        cout<<"position is "<<position[count];
        }
        pos++;
        p=p->next;

    } while(p!=head);
    count++;
   
return count;
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
    int n,num;
    cout<<"enter nodes"<<endl;
    cin>>n;
     ckl* head=new ckl();
      head=create(n);
  //  cout<<"enter the num to know its frequency"<<endl;
    // cin>>num;
   
  //  ckl* tail=NULL;
  
    counter(head);

}