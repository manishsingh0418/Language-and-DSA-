#include <iostream>
#include <vector>
using namespace std;
int MaximumSubarraySum(vector<int> arr, int n)
{
int res=arr[0];
int maxEnding=arr[0];
for(int i=1;i<n;i++)
{
    maxEnding=max(maxEnding+arr[i],arr[i]);
    res=max(res,maxEnding);
}
return res;
}
int main()
{
    int n;
    cout << "Enter the value of N ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << "Elements of Array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a=MaximumSubarraySum(arr, n);
    cout<<a;
}