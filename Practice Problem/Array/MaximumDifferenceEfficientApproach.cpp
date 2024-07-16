#include <iostream>
#include <vector>
using namespace std;

void MaximumDifference(vector<int> arr, int n)
{
    if (n < 2) {
        cout << "Array must contain at least two elements." << endl;
        return;
    }

    int res = arr[1] - arr[0];
    int minVal = arr[0];

    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }

    cout << "Maximum difference: " << res << endl;
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

    MaximumDifference(arr, n);
    return 0;
}
