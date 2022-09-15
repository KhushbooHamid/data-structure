#include<iostream>
using namespace std;
int recur(int x)
{
    if(x==0)
    return 0;
    else
    return (x-1)+2;
}
int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;
    cout<<recur(a);
}