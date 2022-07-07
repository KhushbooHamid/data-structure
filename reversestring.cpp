#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    string s;
    int i,count=0;
    cout<<"enter a string "<<endl;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    for(i=count;i>=0;i--)
    cout<<s[i];
}