long long countWays(int m)
    {
        if(m == 0 || m == 1)
        return 1;
        long long dp1[m+1];
        long long dp2[m+1];
        dp1[0] = 1;
        dp2[0] = 1;
        dp1[1] = 1;
        dp2[1] = 0;
        dp1[2] = 1;
        dp2[2] = 1;
        for(int i=3;i<=m;i++)
        {
            dp1[i] = dp1[i-1];
            dp2[i] = dp1[i-2]+dp2[i-2];
        }
        return dp1[m]+dp2[m];
    }
