#include <iostream>
#include <vector>
using namespace std;
void MoveZerosToEnd(vector<int> arr, int n)
{ 
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
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