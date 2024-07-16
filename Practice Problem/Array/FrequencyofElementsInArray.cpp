#include <iostream>
#include <vector>
using namespace std;

void FrequencyOfElement(vector<int> arr, int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    // Handle the last element
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << 1 << endl;
    }
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
    FrequencyOfElement(arr, n);
    return 0;
}
