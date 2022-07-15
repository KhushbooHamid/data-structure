#include<iostream>
using namespace std;
#include<string.h>
int palan(string s,int start,int end)
{
   if(start>=end)
   {
    return 1;
   }
   if(s[start]!=s[end])
   {
    return 0;
   }
   return palan(s,start+1,end-1);
}
int main()
{
    string s;
   
    cout<<"enter a string"<<endl;
    cin>>s;
     int len;
    len=s.length();
    if(palan(s,0,len-1))
    {
        cout<<"p";
    }
    else
    cout<<"n";
}