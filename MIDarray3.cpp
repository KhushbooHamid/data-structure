#include<iostream>
using namespace std;
int main()
{
    int a[5]={23,34,45,56,67};
    int n=5;
    display(a,n);
}
void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}