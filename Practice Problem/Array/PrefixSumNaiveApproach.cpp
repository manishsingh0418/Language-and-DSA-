#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,b;
    cout<<"Enter Starting Index ";
    cin>>a;
    cout<<"Enter Ending Index ";
    cin>>b;
    int sum=0;
    for(int i=a;i<=b;i++)
    {
     sum=sum+arr[i];
    }
    cout<<sum;
}
