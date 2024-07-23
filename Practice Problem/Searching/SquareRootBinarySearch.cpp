#include<iostream>
using namespace std;
int SquareRoot(int x,int low,int high)
{
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==x)
        {
            return mid;
        }
        else if(msq>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
           ans=mid;
        }
    }
    return ans;
}
int main()
{
   cout<<"Enter X ";
   int x;
   cin>>x;
   int low=1;
   int high=x;
   int a=SquareRoot(x,low,high);
   cout<<a;
   return 0;
}
