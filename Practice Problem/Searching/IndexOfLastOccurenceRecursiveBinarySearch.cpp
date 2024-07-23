#include <iostream>
using namespace std;

int LastOccurrence(int arr[], int l, int h, int x, int n) {
    if (l > h) {
        return -1;
    }
    int mid = l + (h - l) / 2;  // safer way to calculate mid to avoid overflow
    if (arr[mid] > x) {
        return LastOccurrence(arr, l, mid - 1, x, n);
    } else if (arr[mid] < x) {
        return LastOccurrence(arr, mid + 1, h, x, n);
    } else {
        if (mid == n - 1 || arr[mid + 1] != x) {
            return mid;
        } else {
            return LastOccurrence(arr, mid + 1, h, x, n);
        }
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout << "Enter element to be searched: ";
    cin >> x;
    int l = 0;
    int h = n - 1;
    int a = LastOccurrence(arr, l, h, x, n);
    cout << a;
    return 0;
}