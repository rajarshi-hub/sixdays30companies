	int minDifference(int arr[], int n)  { 
	    int s = 0;
	    for(int i=0;i<n;i++)
	    s+=arr[i];
	    bool dp[n+1][s+1];
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=s;j++)
	        {
	           if(i == 0 &&  j == 0)
	           dp[i][j] = true;
	           else
	           if(i == 0)
	           dp[i][j] = false;
	           else
	           if(j == 0)
	           dp[i][j] = true;
	           else
	           {
	               dp[i][j] = dp[i-1][j] || (j-arr[i-1]>=0?dp[i-1][j-arr[i-1]]:false);
	           }
	        }
	    }
	    int mi = INT_MAX;
	    for(int i=0;i<=s/2;i++)
	    {
	        if(dp[n][i])
	        {
	            mi = min(abs(s-2*i),mi);
	        }
	    }
	    return mi;
	} 
