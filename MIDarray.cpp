#include<iostream>
using namespace std;
#define length 100
int main()
{
    int arr[length],size,item,pos;
    cout<<"enter the size of array max 100";
    cin>>size;
    cout<<"enter the elements";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element you want to delete";
    cin>>item;
    for(int j=0;j<size;j++)
    {
        if(arr[j]==item)
        {
            pos=j;
            break;
        }
    }
    for(int i=pos;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size=size-1;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}