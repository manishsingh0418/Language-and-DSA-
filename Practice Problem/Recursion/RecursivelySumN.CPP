//{ Driver Code Starts
#include <iostream>
using namespace std;
// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int sum=0;
        int recursiveSum(int N)
    {
        if(N==0){
            return 0;
        }
        sum=sum+N;
        recursiveSum(N-1);
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
	    int N;
	    cin>>N;
	    Solution ob;
	    cout<<ob.recursiveSum(N)<<endl;
	return 0;
}
// } Driver Code Ends