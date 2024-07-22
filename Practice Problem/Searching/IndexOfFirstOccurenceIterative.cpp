#include <iostream>
using namespace std;

int FirstOccurrence(int arr[], int n,int x) {
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
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
    int a = FirstOccurrence(arr, n,x);
    cout << a;
    return 0;
}
