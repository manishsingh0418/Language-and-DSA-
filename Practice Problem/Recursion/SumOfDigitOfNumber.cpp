//{ Driver Code Starts
#include <iostream>
using namespace std;
// } Driver Code Ends
//User function Template for C++
class Solution{
  public:
    // Complete this function
    int sum=0;
    int sumOfDigits(int n)
    {
        //Your code here
        if(n==0)
        {
            return 0;
        }
        sum=sum+n%10;
        sumOfDigits(n/10);
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int n;
    cin>>n;
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	return 0;
}
// } Driver Code Ends