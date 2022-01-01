class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    int i,j,k;
	    i = j = k = 0;
	    ull dp[n];
	    dp[0] = 1;
	    for(int ind=1;ind<n;ind++)
	    {
	        ull mi = min({dp[i]*2,dp[j]*3,dp[k]*5});
	        dp[ind] = mi;
	        if(mi == dp[i]*2)
	        i++;
	        if(mi == dp[j]*3)
	        j++;
	        if(mi == dp[k]*5)
	        k++;
	    }
	    return dp[n-1];
	}
};
