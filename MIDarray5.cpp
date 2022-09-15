#include<iostream>
using namespace std;
void product_arr(int a[],int b[],int size)
{
    int i;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    cin>>a[i];
     cout<<"enter the elements";
    for(i=0;i<size;i++)
    cin>>b[i];
  int   c[4];
    for(i=0;i<4;i++)
    {
        c[i]=a[i]*b[i];
    }
     for(i=0;i<4;i++)
     cout<<c[i]<<endl;
    
}
int main()
{
    int a[4]={1,2,3,4};
    int b[4]={10,20,30,40};
    int c[4];

    product_arr(a,b,4);
}