#include<iostream>
using namespace std;
#define size 100
int main()
{
    int a[size];
    int n,i,item,pos;
    cout<<"enter the size of array(max 100)";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++)
    {
       
        cin>>a[i];
    }
    cout<<"enter the element to be deleted";
    cin>>item;
    for(i=0;i<n;i++)
    {
        if(item==a[i])
        {
        pos=i;
        break;
        }
    }
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}