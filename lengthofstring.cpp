#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int len,count=0;
    string s;
    cout<<"enter a string "<<endl;
    cin>>s;
    cout<<s<<endl;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    cout<<"the length of the string is "<<count;
}