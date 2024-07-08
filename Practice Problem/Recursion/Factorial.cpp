#include<iostream>
using namespace std;
int FibonacciSeries(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*FibonacciSeries(n-1);
}
int main()
{
    int n;
    cout<<"Enter N ";
    cin>>n;
    int a =FibonacciSeries(n);
    cout<<a;
}