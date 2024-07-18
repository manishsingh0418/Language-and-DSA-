#include <iostream>
#include <vector>
using namespace std;
void MaximumSubarraySum(vector<int> arr, int n)
{
   int res=arr[0];
   for(int i=0;i<n;i++)
   {
    int curr=0;
    for(int j=i;j<n;j++)
    {
        curr=curr+arr[j];
        res=max(res,curr);
    }
   }
    cout<<res;
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
    MaximumSubarraySum(arr, n);
}