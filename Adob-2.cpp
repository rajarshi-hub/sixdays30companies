int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        vector<unordered_map<int,int>> dp(n);
        int ma = 1;
        for(int i=1;i<n;i++)
        {
            for(int j = i-1;j>=0;j--)
            {
                int diff = nums[j]-nums[i];
                if(dp[j].find(diff) != dp[j].end())
                {
                    dp[i][diff] = max(dp[i][diff],dp[j][diff]+1);
                }
                else
                {
                    dp[i][diff] = max(dp[i][diff],2);
                }
            }
            for(auto it:dp[i])
            {
                ma = max(ma,it.second);
            }
        }
        return ma;
