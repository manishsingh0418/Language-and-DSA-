#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void MaximumConsecutive1s(vector<int> arr, int n)
{
    int count = 0;
    int curr = 0;  // Declare curr outside the loop
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            count = max(count, curr);
        }
    }
    cout << count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MaximumConsecutive1s(arr, n);
}
