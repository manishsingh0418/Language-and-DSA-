#include <iostream>
#include <vector>

using namespace std;
int OneOddOccuring(vector<int> arr, int n)
{
int res = arr[0];
for(int i=1;i<n;i++)
{
    res=res^arr[i];
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
    int a = OneOddOccuring(arr, n);
    cout << a;
}
