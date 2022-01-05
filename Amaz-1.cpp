int maxProfit(int k, int n, int price[]) {
        int dp[n+1][k+1];
        int ma[n+1][k+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=k;j++)
            {
                if(i == 0 || j == 0)
                {
                dp[i][j] = 0;
                if(i == 0)
                ma[i][j] = INT_MIN;
                else
                ma[i][j] = max(-price[i-1],ma[i-1][j]);
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],ma[i-1][j-1]+price[i-1]);
                    ma[i][j] = max(ma[i-1][j],dp[i][j]-price[i-1]); 
                }
                
            }
        }
        return dp[n][k];
}
