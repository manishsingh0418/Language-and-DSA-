#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void LeftRotateByD(vector<int> &arr, int n, int d)
{
    // Handle cases where d >= n
    d = d % n;
    
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);

    for (int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    LeftRotateByD(arr, n, d);

    return 0;
}
