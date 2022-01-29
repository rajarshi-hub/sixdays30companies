 int kvowelwords(int N, int K) {
        long long int dp[N+1][K+1];
        int mod = 1000000007;
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=K;j++)
            {
                if(i == 0 &&  j == 0)
                dp[i][j] = 1;
                else
                if(i == 0)
                dp[i][j] = 1;
                else
                if(j == 0)
                dp[i][j] = (dp[i-1][K]*21)%mod;
                else
                {
                    dp[i][j] = (dp[i-1][K]*21)%mod;
                    dp[i][j] = (dp[i][j]+(dp[i-1][j-1]*5)%mod)%mod;
                }
            }
        }
        return dp[N][K];
