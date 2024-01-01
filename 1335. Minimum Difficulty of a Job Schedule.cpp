class Solution {
public:
    int n;
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        n = jobDifficulty.size();
        if (n < d) return -1;

        vector<vector<int>> dp(n, vector<int>(d + 1, -1));
        return solve(0, d, jobDifficulty, dp);
    }

    int solve(int i, int d, const vector<int>& jobDifficulty, vector<vector<int>>& dp) {
        if (d == 1) {
            int ans = 0;
            for (int j = i; j < n; j++)
                ans = max(ans, jobDifficulty[j]);
            return ans;
        }
        
        if (dp[i][d] != -1)
            return dp[i][d];

        int ans = INT_MAX, maxValue = 0;

        for (int j = i; j <= n - d; j++) {
            maxValue = max(maxValue, jobDifficulty[j]);
            ans = min(ans, maxValue + solve(j + 1, d - 1, jobDifficulty, dp));
        }

        return dp[i][d] = ans;
    }
};
