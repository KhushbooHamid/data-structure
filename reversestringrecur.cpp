#include<iostream>
using namespace std;
#include<string.h>
void rev(char *s)
{
    if(*s!='\0'){
    rev(s+1);
    cout<<*s;
    }
}
int main()
{
    char s[100];
    cout<<"enter a string";
    cin>>s;
  // char s[]="hi there...";     method 2
    rev(s);
}