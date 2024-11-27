//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for (int i = 0; i < n; i++) {
        // We only care about positive numbers and ignore non-positive numbers
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            // Swap arr[i] to the correct position, if it's in the valid range
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
        for(int i=0;i<n;i++){
             if (arr[i] != i + 1) {
            return i + 1;
            }
        }
    return n+1;
    }
};



//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends