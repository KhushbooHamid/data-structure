#include<iostream>
using namespace std;
int scan(int a[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
}
int disp(int a[], int size)
{cout<< "the array is ";

 for(int i=0;i<size;i++)

 cout<<a[i]<<endl;
   
}
int sum(int a[], int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum is "<<sum<<endl;
}
int product(int a[], int size)
{
    int p=1;
    for(int i=0;i<size;i++)
    {
        p=p*a[i];
    }
    cout<<"the product is "<<p<<endl;
}
int main()
{
    int a[6];
    int n;
    scan(a,6);
    disp(a,6);
sum(a,6);
product(a,6);

}