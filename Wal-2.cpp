class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int dp[n][n];
        int s = 0;
        for(int i=0;i<n;i++)
            s+=piles[i];
        for(int g = 0;g<n;g++)
        {
            for(int i=0,j=g;j<n;j++,i++)
            {
                if(g == 0)
                    dp[i][j] = piles[i];
                else
                    if(g == 1)
                        dp[i][j] = max(piles[i],piles[j]); 
                else
                {
        dp[i][j] = max(piles[i]+min(dp[i+2][j],dp[i+1][j-1]),piles[j]+min(dp[i+1][j-1],dp[i][j-2]));
                }
            }
        }
        return dp[0][n-1] > s-dp[0][n-1];
    }
};
