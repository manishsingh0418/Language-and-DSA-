//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
 int reverseNumber(int N) {
        int rev = 0;
        while (N > 0) {
            rev = rev * 10 + N % 10;
            N /= 10;
        }
        return rev;
    }

    bool isPalin(int N) {
        int rev = reverseNumber(N);
        return (N == rev);
    }
};

//{ Driver Code Starts.

int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends