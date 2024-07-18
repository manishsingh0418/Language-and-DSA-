#include <iostream>
#include <vector>
using namespace std;

int LongestOddEvenSubArray(vector<int> arr, int n)
{
    int res = 1;
    int curr = 1;
    for(int i = 1; i < n; i++)
    {
        if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i-1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else 
        {
            curr = 1;
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = LongestOddEvenSubArray(arr, n);
    cout << "The length of the longest subarray with alternating odd and even numbers is: " << a;
}
