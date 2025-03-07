//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        int n=arr.size(),count=INT_MIN;
        vector<int> left(n),right(n);
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && s.top()>=arr[i])
            s.pop();
            if(!s.empty())
            left[i]=s.top();
            else
            left[i]=0;
            s.push(arr[i]);
        }
        while(!s.empty())
        s.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()>=arr[i])
            s.pop();
            if(!s.empty())
            right[i]=s.top();
            else
            right[i]=0;
            s.push(arr[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            count=max(count,abs(left[i]-right[i]));
        }
        return count;
    }


};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends