#include<iostream>
using namespace std;
int reclength(char *str)
{
    if(*str=='\0')
    return 0;
    else
    return 1+reclength(str+1);
}
int main()
{
    char str[]="hello";
    cout<<reclength(str);

}