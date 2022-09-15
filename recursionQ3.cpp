#include<iostream>
using namespace std;
int vowels(char ch[10])
{
    int i,count=0;
    for(i=0;i<10;i++)
    {
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='o'||ch[i]=='i'||ch[i]=='u')
         count++;
    }
    cout<<"the number of vowels is "<<count;
}
int main()
{
    char str[10];
    cout<<"enter a string";
    gets(str);
    vowels(str);
}
