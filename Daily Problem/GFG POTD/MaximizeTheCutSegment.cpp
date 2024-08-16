class Solution
{
    public:
    int maximizeTheCuts(int n, int x, int y, int z) {
        vector<int> dp(n+1, -1);
        //base case
        dp[0] = 0;
        for (int i = 1; i <= n; ++i) {
            // if the segment can be made then update the dp array
            if (i - x >= 0 && dp[i - x] != -1) {
                dp[i] = max(dp[i], dp[i - x] + 1);
            }
            if (i - y >= 0 && dp[i - y] != -1) {
                dp[i] = max(dp[i], dp[i - y] + 1);
            }
            if (i - z >= 0 && dp[i - z] != -1) {
                dp[i] = max(dp[i], dp[i - z] + 1);
            }
        }
        return dp[n] == -1 ? 0 : dp[n];
    }
};

