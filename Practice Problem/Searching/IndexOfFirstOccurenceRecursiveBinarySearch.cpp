#include <iostream>
using namespace std;

int FirstOccurrence(int arr[], int n, int x, int l, int h) {
    if (l > h) {
        return -1;
    }

    int mid = l + (h - l) / 2;
    if (arr[mid] == x) {
        // Check if it's the first occurrence
        if (mid == 0 || arr[mid - 1] != x) {
            return mid;
        } else {
            return FirstOccurrence(arr, n, x, l, mid - 1);
        }
    } else if (x < arr[mid]) {
        return FirstOccurrence(arr, n, x, l, mid - 1);
    } else {
        return FirstOccurrence(arr, n, x, mid + 1, h);
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
    int a = FirstOccurrence(arr, n, x, l, h);
    cout << a;
    return 0;
}
