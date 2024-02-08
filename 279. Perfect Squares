class Solution {
public:
    int numSquares(int n) {
        std::vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; ++i) {
            int min_squares = INT_MAX;
            for (int j = 1; j * j <= i; ++j) {
                int remaining = i - j * j;
                min_squares = std::min(min_squares, dp[remaining]);
            }
            dp[i] = min_squares + 1;
        }

        return dp[n];
    }
};
