#include <iostream>
using namespace std;
class Solution{
  public:
    int countDigits(int n)
    {
        int digit =0;
       //Your code here
       if(n==0)
       { 
           
           return 0;
       }
       digit++;
       return (digit+countDigits(n/10));
    }
};

//{ Driver Code Starts.

int main() {
	int n;
    cin>>n;
    Solution obj;
	cout<<obj.countDigits(n)<<endl;
	return 0;
}



// } Driver Code Ends