#include<iostream>
#include<vector>
using namespace std;
void getWater(vector<int>arr,int n)
{
    
}
int main()
{
    int n;
    cout<<"Enter the value of N ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter "<<n<<"Elements of Array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    getWater(arr,n);
}