//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int n=arr.size();
        int x=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++) x^=arr[i];
        if(x) return 0;
        long long y=1;
        for(int i=1;i<n;i++)
        {
            y=(y*2) %mod;
        }
        return (y-1);
    }


};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int ans = obj.countgroup(arr);
        cout << ans << endl;
    }
}

// } Driver Code Ends