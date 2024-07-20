#include<iostream>
using namespace std;
void getSum(int arr[],int n,int a,int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum is "<<sum;
}
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
    getSum(arr,n,a,b);
    
}
