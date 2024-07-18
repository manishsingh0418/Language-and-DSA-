#include <iostream>
#include <vector>
using namespace std;
int LongestOddEvenSubArray(vector<int> arr, int n)
{
int res=1;
for(int i=0;i<n;i++)
{
int curr=1;
for(int j=i+1;i<n;j++)
{
    if((arr[j]%2==0 && arr[j-1]%2!=0 )||(arr[j]%2!=0 && arr[j-1]%2==0))
    {
        curr++;
    }
    else{
        break;
    }
    res=max(res,curr);
}
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
    int a=LongestOddEvenSubArray(arr, n);
    cout<<a;
}