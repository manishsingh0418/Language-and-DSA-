//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(vector<int>& arr, int low, int high, int k)
    {
        if(low > high) // if the array has been searched and element not found check
        {
            return -1;
        }
        int mid = low+((high-low)>>1); // calculate the mid using bitwise for little more efficiency
        if(arr[mid] == k) return mid; // return index when element is found
        if(arr[low] <= arr[mid]) // left half is sorted search here
        {
            if(arr[low] <= k && k <= arr[mid]) // check if the key is present in this range
            {
                return solve(arr, low, mid-1, k); // shrink the right pointer to mid-1
            }
            else // key is present in the right side of the array
            {
                return solve(arr, mid+1, high, k); // shrink the left pointer to mid+1
            }
        }
        else // right half is sorted search here
        {
            if(k >= arr[mid] && k <= arr[high]) // check if key lies in right array range
            {
                return solve(arr, mid+1, high, k); //shrink the left pointer to mid+1
            }
            else // key is present in the left half
            {
                return solve(arr, low, mid-1, k); // shrink the right pointer to mid-1
            }
        }
    }
    int search(vector<int>& arr, int key) {
        // complete the function here
        return solve(arr, 0, arr.size()-1, key); // send array, low, high and the key
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends