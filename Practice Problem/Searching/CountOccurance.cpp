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

int countOccurrence(int arr[], int n, int x) {
    int first = FirstOccurrence(arr, n, x, 0, n - 1);
    if (first == -1) {
        return 0; // If the element is not found
    }
    int last = LastOccurrence(arr, n, x);
    return last - first + 1;
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

    int count = countOccurrence(arr, n, x);
    cout << "The element " << x << " occurs " << count << " times." << endl;
    return 0;
}

