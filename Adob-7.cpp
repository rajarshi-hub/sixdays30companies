int maxCoins(vector<int>&A,int n)
    {
	    int dp[n][n];
	    for(int g=0;g<n;g++)
	    {
	        for(int i=0,j=g;j<n;i++,j++)
	        {
	            if(g == 0)
	            dp[i][j] = A[i];
	            else
	            if(g == 1)
	            dp[i][j] = max(A[i],A[j]);
	            else
	            {
                dp[i][j] = max(A[i]+min(dp[i+1][j-1],dp[i+2][j]),A[j]+min(dp[i][j-2],dp[i+1][j-1]));
	            }
	        }
	    }
	    return dp[0][n-1];
    }
