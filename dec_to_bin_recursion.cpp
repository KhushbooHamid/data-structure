#include<iostream>
using namespace std;
int convert(int x)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else{
   
 // convert(x/2);
    return(x%2+10*convert(x/2));
    }
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
   cout<< convert(n);
}