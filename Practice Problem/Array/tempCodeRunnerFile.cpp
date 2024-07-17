#include <iostream>
#include <vector>
using namespace std;
void MaximumConsecutive1s(vector<int> arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        count = max(count, curr);
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