#include <iostream>
#include <vector>
using namespace std;

void MaximumProfit(vector<int> arr, int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit+=(arr[i]-arr[i-1]);
        }
        
    }
    cout<<profit;
}

int main()
{
    cout << "Enter the value of N: ";
    int n;
    cin >> n;
    if (n <= 0) {
        cout << "N must be greater than 0." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements of the array: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MaximumProfit(arr, n);
    return 0;
}
