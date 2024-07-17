#include <iostream>
#include <vector>
using namespace std;
void getWater(vector<int> arr, int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }
        res = res + (min(lmax, rmax) - arr[i]);
    }
    cout << res;
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
    getWater(arr, n);
}