//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool stars(string&p,int a){
        for(int i=0;i<=a;i++){
            if(p[i]!='*') return 0;
        }
        return 1;
    }
    int check(int i,int j,string &pattern, string &str,vector<vector<int>> &dp){
        //base case
        if(i<0 && j<0) return 1;
        if(i<0 && j>=0) return 0;
        if(i>=0 && j<0) return stars(pattern,i);
        //recursive
        if(dp[i][j] != -1) return dp[i][j];
        
        if(pattern[i]==str[j] || pattern[i]=='?'){
            return check(i-1,j-1,pattern,str,dp);
        }
        else{
            if(pattern[i]=='*'){
                return dp[i][j]=max(check(i,j-1,pattern,str,dp),check(i-1,j,pattern,str,dp));
            }
            else return dp[i][j]=0;
        }
    }
    int wildCard(string pattern, string str) {
        //CodeGenius
        int n=pattern.size(),m=str.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return check(n-1,m-1,pattern,str,dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends