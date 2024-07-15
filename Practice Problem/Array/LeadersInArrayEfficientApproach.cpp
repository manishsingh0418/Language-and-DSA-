#include<iostream>
#include<vector>
using namespace std;

void LeadersInArray(vector<int> arr, int n) {
    int curr_ldr = arr[n-1];
    cout << curr_ldr << " ";  // Print the last element as the first leader
    for(int i = n-2; i >= 0; i--) {
        if(curr_ldr < arr[i]) {
            curr_ldr = arr[i];
            cout << curr_ldr << " ";
        }
    }
}

int main() {
    cout << "Enter the value of N: ";
    int n;
    cin >> n;
    cout << "Enter " << n << " elements of the array: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    LeadersInArray(arr, n);
    return 0;
}
