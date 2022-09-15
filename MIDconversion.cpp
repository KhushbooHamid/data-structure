#include<iostream>
using namespace std;
int binary_convert(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
 return(n%2+10*binary_convert(n/2));
}

int octal_binary(int x)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    return(x%8+10*octal_binary(x/8));
}

int main()
{
    int n;
    cin>>n;
    cout<< octal_binary(n);
}