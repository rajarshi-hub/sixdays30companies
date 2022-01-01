class Solution {
	public:
		int CountWays(string str){
		    int n = str.length();
		    int dp[n+1];
		    dp[0] = 1;
		    dp[1] = 1;
		    if(str[0] == '0')
		    return 0;
		    int MOD = pow(10,9)+7;
		    for(int i=2;i<=n;i++)
		    {
		        if(str[i-1] != '0')
		        dp[i] = dp[i-1];
		        else
		        dp[i] = 0;
		        if(str[i-2] == '1')
		        dp[i]= (dp[i]+dp[i-2])%MOD;
		        else
		        if(str[i-2] == '2' && str[i-1] <= '6')
		        dp[i]= (dp[i]+dp[i-2])%MOD;
		    }
		    return dp[n];
		}

};
