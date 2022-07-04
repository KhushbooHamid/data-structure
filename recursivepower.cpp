#include<iostream>
using namespace std;
int power(int num, int pow)
{
    if(pow==0)
    return 1;
    else if(pow==1)
    return num;
    else
    return(num*(power(num,pow-1)));
}
int main()
{
    int num,pow;
    cout<<"enter the number and power"<<endl;
    cin>>num>>pow;
    cout<<power(num,pow);
}