int s=0;
        for(int i=0;i<N;i++)
        s+=arr[i];
        if(s%2!=0)
        return 0;
        s/=2;
        bool dp[N+1][s+1];
        for(int i=0;i<=N;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<=s;i++)
        {
            dp[0][i]=false;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=s;j++)
            {
            if(arr[i-1]>j)
            dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=(dp[i-1][j]) || (dp[i-1][j-arr[i-1]]);
            }
        }
        return dp[N][s];
        
    }
