#include <iostream>
#include <vector>

using namespace std;
int OneOddOccuring(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 == 1)
        {
            return arr[i];
        }
    }
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
    int a = OneOddOccuring(arr, n);
    cout << a;
}
