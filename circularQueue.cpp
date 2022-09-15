// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define Max 100
int queue[Max];
int front=0,rear=-1,count=0;
void enque(int item)
{
    if(count==Max)
    cout<<"overflow"<<endl;
    else
    {
        rear=(rear+1)%(Max-1);
        queue[rear]=item;
        count++;
    }
}
int deque()
{
    int item;
    if(count==0)
    cout<<"empty"<<endl;
    else
    {
        item=queue[front];
        front=(front+1)%(Max-1);
        return item;
    }
}
void view()
{
    if(count==0)
    cout<<"empty"<<endl;
    else 
    {
    int j=front;
    for(int i=0;i<count;i++)
    {
        cout<<queue[j]<<endl;
        j=(j+1)%(Max-1);
    }
    }
}
int main() {
   int ch,item;
   while(1)
   {
   cout<<"enter 1 for enque,2 for deque,3 for view,4 for exit"<<endl;
   cin>>ch;
   if(ch==1)
   {
       cout<<"enter item to enqeu"<<endl;
       cin>>item;
       enque(item);
   }
   else if(ch==2)
   {
      item= deque();
      if(item==-1)
      {
          cout<<"underflow"<<endl;
      }
   }
   else if(ch==3)
   view();
   else
   break;
   }
    return 0;
}