
#include<iostream>
using namespace std;
bool IsPair(int arr[],int n,int x)
{
   int i=0,j=n-1;
   while(i<j)
   {
       if(arr[i]+arr[j]==x)
       {
           return true;
       }
       else if((arr[i]+arr[j])>x)
       {
           j--;
       }
       else {
           i++;
       }
   }
    return false;
}
int main()
{
    int n;
    cout<<"Enter N ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Elements of array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x ";
    cin>>x;
    bool a=IsPair(arr,n,x);
    if(a==1)
    {
        cout<<"True";
    }
    else 
    cout<<"False";
    return 0;
}

