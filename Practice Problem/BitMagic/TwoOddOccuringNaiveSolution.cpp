#include <iostream>
#include <vector>

using namespace std;
vector<int> TwoOddOccuring(vector<int> arr, int n)
{
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count%2==1)
        {
            res.push_back(arr[i]);
        }
    }
    return res;
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
    vector<int> a = TwoOddOccuring(arr, n);
    for (int x : a)
    {
        cout << x<<" ";
    }
}
