// Maximum value of arr[j]-arr[i] such that j>i

#include <iostream>
#include <vector>
using namespace std;

void MaximumDifference(vector<int> arr, int n)
{
int res=arr[1]-arr[0];
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        res=max(res,arr[j]-arr[i]);
    }

}
cout<<res;
}

int main()
{
    cout << "Enter the value of N: ";
    int n;
    cin >> n;
    cout << "Enter " << n << " elements of the array: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MaximumDifference(arr, n);
    return 0;
}
