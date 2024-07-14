#include <iostream>
#include <vector>
using namespace std;

void LeftRotateByD(vector<int>& arr, int n, int d) {
    vector<int>temp(d);
    for (int i = 0; i < d; i++) {
       temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    int d;
    cin >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    LeftRotateByD(arr, n, d);
    return 0;
}
