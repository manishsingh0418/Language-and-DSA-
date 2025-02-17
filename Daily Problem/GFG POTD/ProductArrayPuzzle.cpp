//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
   vector<long long int> productExceptSelf(vector<long long int>& nums) {
        // code here
        int n = nums.size();
        vector<long long int> res(n, 1);
        
        long long int leftproduct = 1;
        for(int i=0; i<n; i++){
            res[i] *= leftproduct;
            leftproduct *= nums[i];
        }
        long long int rightproduct = 1;
        for(int i=n-1; i>=0; i--){
            res[i] *= rightproduct;
            rightproduct *= nums[i];
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends