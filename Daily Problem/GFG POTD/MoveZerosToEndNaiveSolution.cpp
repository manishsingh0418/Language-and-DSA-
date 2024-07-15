#include <iostream>
#include <vector>
using namespace std;
void MoveZerosToEnd(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]!=0)
            {
                swap(arr[i],arr[j]);
                break;
            }
        }
        }
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}
int main()
{
    cout << "Enter the value of N ";
    int n;
    cin >> n;
    cout << "Enter " << n << " elements of Array ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MoveZerosToEnd(arr, n);
    return 0;
}