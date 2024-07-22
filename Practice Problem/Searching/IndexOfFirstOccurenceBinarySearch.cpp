#include <iostream>
using namespace std;

int FirstOccurrence(int arr[], int n, int x, int l, int h) {
    while (l <= h) {
        int mid = l + (h - l) / 2; // Recalculate mid in each iteration
        if (arr[mid] == x) {
            // Check if it's the first occurrence
            if (mid == 0 || arr[mid - 1] != x) {
                return mid;
            } else {
                h = mid - 1; // Move left to find the first occurrence
            }
        } else if (x < arr[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
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
