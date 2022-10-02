#include<iostream>
using namespace std;
void is(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
     cout<<"sorted array is "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}
int main()
{
    int a[5]={2,1,8,7,5};
    int n=5;
    is(a,n);
}