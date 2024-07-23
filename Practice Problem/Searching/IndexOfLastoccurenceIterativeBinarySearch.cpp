#include <iostream>
using namespace std;

int LastOccurrence(int arr[], int n, int x) {
    int l = 0;
    int h = n - 1;
    int result = -1;

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] == x) {
            result = mid;
            l = mid + 1;  // search on the right side for the last occurrence
        } else if (arr[mid] < x) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    return result;
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

    int result = LastOccurrence(arr, n, x);
    cout << result;
    return 0;
}
