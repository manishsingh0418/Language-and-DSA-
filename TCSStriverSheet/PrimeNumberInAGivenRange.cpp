#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int checkPrime(int n)
{
    int count=0;
    if(n<=1)
    {
        return 0;
    }
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)return 1;
    return 0;
}
int main()
{
    int min,max;
    cin>>min>>max;
    vector<int>res;
    for(int i=min;i<max;i++)
    {
        if(checkPrime(i))
        {
          res.push_back(i);
        }
    }
    for(int x:res)
    {
        cout<<x<<" ";
    }

}