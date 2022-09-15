#include<iostream>
using namespace std;
#include<string.h>
int vowels(string x)
{
    int count=0,i;
    for(i=0;x[i]!='\0';i++){
    if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
    {
        count++;
    }
    }
    return count;
}
int main()
{
    string s;
    cout<<"enter a string";
    cin>>s;
    cout<<vowels(s);
}