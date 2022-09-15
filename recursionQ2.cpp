#include<iostream>
using namespace std;
int func(int x)
{
    if(x==0)
    return 0;
    else
    return((x-1)+2);
}
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    cout<<func(num);
}