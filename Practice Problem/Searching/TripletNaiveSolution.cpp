#include<iostream>
using namespace std;
bool isTriplet(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    return true;
                }
            }
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
    bool a=isTriplet(arr,n,x);
    if(a==1)
    {
        cout<<"True";
    }
    else 
    cout<<"False";
    return 0;
}
