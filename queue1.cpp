// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define Max 100
int queue[Max];
int front=0,rear=-1;
void enque(int item)
{
    if(rear<Max)
    queue[++rear]=item;
    else
    cout<<"overflow";
}
int deque()
{
    if(front<=rear)
    return queue[front++];
    else
    return -1;
}
void view()
{
    if(front>rear)
    cout<<"empty";
    else
    {
        for(int i=front;i<rear;i++)
        cout<<queue[i]<<endl;
    }
}
int main() {
   int ch,item;
  
   while(1)
   {
        cout<<"enter 1 for enque,2 for deque,3 for view, 4 for exit"<<endl;
   cin>>ch;
       if(ch==1)
       {
           cout<<"enter the item";
           cin>>item;
           enque(item);
       }
       else if(ch==2)
       {
           item=deque();
           if(item==-1)
           {
               cout<<"underflow";
           }
          // else
         //  cout<<item<<endl;
       }
       else if(ch==3)
       view();
       else
       break;
       
   }

    return 0;
}