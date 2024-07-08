//{ Driver Code Starts
//Initial Template for C++
#include<iostream>
using namespace std;
// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        return fibonacci(n-2)+fibonacci(n-1);
        //Your code here
    }
};

//{ Driver Code Starts.
int main() {
	    //taking number n
        int n;
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	return 0;
}
// } Driver Code Ends