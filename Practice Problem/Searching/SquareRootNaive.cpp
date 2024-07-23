#include<iostream>
using namespace std;
int SquareRootFloor(int x)
{
    int i=1;
    while(i*i<=x)
    {
        i++;
    }
    return (i-1);
}
int main()
{
    int x;
    cin>>x;
    int a=SquareRootFloor(x);
    cout<<a;
    return 0;
}

