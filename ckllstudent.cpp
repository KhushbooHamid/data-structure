#include<iostream>
using namespace std;
 
class student
{
    public:
    int marks;
    int sem;
    char name[30];
    student* next;
};

student* create(int num)
{
    student* head=NULL;
    student* temp=NULL;
    student* p=NULL;
    student* tail=NULL;
    int i=0;
    for(i=0;i<num;i++)
    {
    student* temp=new student();
    cout<<"enter the following data:name, sem,marks for student "<<i+1<<endl;
    cin>>temp->name>>temp->sem>>temp->marks;
    temp->next=head;
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

void print(student* head)
{
    student* p=head;
   do
    {
        cout<<"name is "<<p->name<<endl<<"sem is "<<p->sem<<endl<<"marks:"<<p->marks<<endl;
        p=p->next;
    }while(p!=head);
}

int main()
{
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    student* head=new student();
    head=create(n);
    print(head);
}