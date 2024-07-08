#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
   return 1+fun(n/2);
}
int main()
{
    int n;
    cout<<"Enter N ";
    cin>>n;
    int a=fun(n);
    cout<<a;
}