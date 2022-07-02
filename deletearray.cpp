#include<iostream>
using namespace std;
int main()
{
    int a[6]={2,7,9,8,6,5};
    int x;
    cout<<"Enter the element to be deleted";
    cin>>x;
    for(int i=0;i<6;i++)
    {
        if(x==a[i])
        a[i]=-1;
    }
    for(int i=0;i<6;i++)
    {
        if(a[i]!=-1)
        cout<<a[i];
    }
}