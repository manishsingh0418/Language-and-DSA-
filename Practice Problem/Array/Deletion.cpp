#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int x;
    int arr[5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element for Deletion" << endl;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] << " ";
    }
}