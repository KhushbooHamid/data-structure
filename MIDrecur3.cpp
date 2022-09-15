#include<iostream>
using namespace std;
int hexa_convert(int n)
{
    if(n<16)
    return n;
    else
    return(n%16+10*hexa_convert(n/16));
}
int main()
{
    int n;
    cout<<"enter";
    cin>>n;
    cout<<hexa_convert(n);
}