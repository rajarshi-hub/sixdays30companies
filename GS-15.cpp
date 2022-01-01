bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int vis[k];
        for(int i=0;i<k;i++)
        {
            vis[i] = 0;
        }
        for(int i=0;i<n;i++)
        {
            vis[nums[i] % k]++;
        }
        if(vis[0] % 2 != 0)
        return false;
        for(int i=1;i<k;i++)
        {
            if(i == k-i)
            {
                if(vis[i]%2 != 0)
                return false;
            }
            else
            {
                if(vis[i] != vis[k-i])
                return false;
            }
        }
        return true;
    }
