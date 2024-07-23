#include <iostream>
using namespace std;

int LastOccurrence(int arr[], int n, int x) {
 
 for(int i=n-1;i>=0;i--)
 {
    if(x==arr[i])
    {
        return i;
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
    int a = LastOccurrence(arr, n, x);
    cout << a;
    return 0;+
}

