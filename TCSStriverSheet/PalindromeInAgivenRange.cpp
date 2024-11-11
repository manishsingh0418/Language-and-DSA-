#include<iostream>
#include<vector>
using namespace std;
int reverse (int a)
{
    int reverse =0;
    while(a>0)
    {
        int b=a%10;
        reverse =reverse*10+b;
        a=a/10;
    }
    return reverse;
}
int ispalindrome(int a)
{
    int b =reverse(a);
    return a==b;
}
int main()
{
    int min,max;
    cin>>min>>max;
    int n=max-min;
    vector<int>arr;
    for(int i=0;i<=n;i++)
    {
     int a=min++;
     if(ispalindrome(a))
     {
        arr.push_back(a);
     }
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;

}