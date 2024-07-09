//{ Driver Code Starts
#include <iostream>
using namespace std;
// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int GCD(int a, int b)
    {
        // Your code here
        if (a == 0)
        {
            return b;
        }
        else
            return GCD(b % a, a);
    }
};
//{ Driver Code Starts.
int main()
{
    int a, b;
    cin >> a >> b;
    Solution ob;
    cout << ob.GCD(a, b) << endl;
    return 0;
}
// } Driver Code Ends