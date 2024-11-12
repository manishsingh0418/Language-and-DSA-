//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original =n;
        int a =n;
        int digit=0;
        while(n>0)
        {
        digit++;
        n=n/10;
        }
        
    int sum=0;
        while(a>0)
        {
            int b=a%10;
            sum=sum+pow(b,digit);
            a=a/10;
        }
        if(sum==original)
        {
            return true;
        }
       return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends