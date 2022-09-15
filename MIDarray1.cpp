#include<iostream>
using namespace std;
int main()
{
    int arr[5]={13,62,43,84,15};
    int item,i,j;
    cout<<"enter the item you want to delete";
    cin>>item;
    for(i=0;i<5;i++)
    {
        if(item==arr[i])
        {
            arr[i]=-1;
        }
    }
    for(j=0;j<5;j++)
    {
        if(arr[j]!=-1)
        cout<<arr[j]<<endl;
    }
}