    // given weight and value vectors and knapsack capacity W
    // find maximum profit
    int 01knapsack(vector<int>& wt, int W, int n)
    {
        int dp[n + 1][W + 1];
        // initializing values
        for(int i=0; i < n+1; i++)
        {
            dp[i][0] = 0;
        }
        for(int j=0; j<W+1; i++)
        {
            dp[0][j] = 0;
        }
        // filing the matrix
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<W+1; j++)
            {
                if(wt[i-1] <= j)
                {
                    dp[i][j] = max(val[i-1] + dp[i-1][j - wt[i-1]], dp[i-1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][W];
    }
