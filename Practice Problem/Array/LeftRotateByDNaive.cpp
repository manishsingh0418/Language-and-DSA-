#include <iostream>
#include <vector>
using namespace std;

void LeftRotateByOne(vector<int>& arr, int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void LeftRotateByD(vector<int>& arr, int n, int d) {
    for (int i = 0; i < d; i++) {
        LeftRotateByOne(arr, n);
    }
    for (int x : arr) {
        cout << x << " ";
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
