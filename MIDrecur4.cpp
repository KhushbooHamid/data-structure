#include<iostream>
using namespace std;
int fibo(int n)
{
    int i;
    if(n==1||n==2)
    return 1;
    else
     
    for(i=1;i<=n;i++)
    return(fibo(n-1)+fibo(n-2));
}

int leucas(int n)
{
    if(n==1||n==2||n==3)
    {
        return 1;
    }
    else
    return (leucas(n-1)+leucas(n-2)+leucas(n-3));
}

int main()
{
    int n;
    cout<<"enter ";
    cin>>n;
    cout<<leucas(n);
}