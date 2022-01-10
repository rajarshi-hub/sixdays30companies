string matrixChainOrder(int p[], int n){
        string s = "";
        int N = n-1;
        int dp[N][N];
        for(int i=0;i<N;i++)
        {
            s+='A'+i;
        }
        string dps[N][N];
        for(int g = 0;g<N;g++)
        {
            for(int i = 0,j=g;j<N;i++,j++)
            {
                dp[i][j] = INT_MAX;
                if(g == 0)
                {
                    dp[i][j] = 0;
                    dps[i][j] = s[i];
                }
                else
                if(g == 1)
                {
                    dp[i][j] = p[i]*p[i+1]*p[i+2];
                    dps[i][j] = "("+s.substr(i,2)+")";
                }
                else
                {
                    for(int k = i;k<j;k++)
                    {
                        if(dp[i][j] > dp[i][k]+dp[k+1][j]+p[i]*p[k+1]*p[j+1])
                        {
                            dp[i][j] = dp[i][k]+dp[k+1][j]+p[i]*p[k+1]*p[j+1];
                            dps[i][j] = "("+dps[i][k]+dps[k+1][j]+")";
                        }
                    }
                }
            }
        }
        return dps[0][N-1];
    }
