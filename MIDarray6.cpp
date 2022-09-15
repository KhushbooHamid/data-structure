#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3};
    int item,index,i;
    cout<<"enter the index ";
    cin>>index;
    cout<<"enter item";
    cin>>item;
    for(i=index;i<=4;i++)
    {
        arr[i+1]=arr[i];
        arr[index]=item;
    }
    for(i=0;i<4;i++)
    cout<<arr[i]<<endl;
    

}