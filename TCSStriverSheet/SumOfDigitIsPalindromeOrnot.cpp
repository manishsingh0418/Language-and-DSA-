//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int reverse (int a)
    {
        int reverse =0;
        while(a>0)
        {
            int b =a%10;
            reverse=reverse*10+b;
            a=a/10;
        }
        return reverse;
    }
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0;
        while(n>0)
        {
            int a= n%10;
            sum =sum+a;
            n=n/10;
        }
        int b =reverse(sum);
        if(b==sum)
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    
cout << "~" << "\n";
}
}

// } Driver Code Ends