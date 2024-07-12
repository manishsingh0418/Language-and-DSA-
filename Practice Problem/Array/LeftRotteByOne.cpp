#include<iostream>
#include<vector>
using namespace std;
void LeftRotateByOne(vector<int>arr,int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    LeftRotateByOne(arr,n);

}