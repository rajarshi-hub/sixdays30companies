bool check(vector<int> &piles,int m,int h)
    {
        int no = 0;
        for(int i=0;i<piles.size();i++)
        no+=ceil((double)piles[i]/m);
        if(no <= h)
            return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int ho) {
        int ma = 0;
        for(int i=0;i<piles.size();i++)
            ma = max(ma,piles[i]);
        int  l = 1;
        int h = ma;
        int ans;
        while(l <= h)
        {
            int m = (l+h)/2;
            bool f1 = check(piles,m,ho);
            if(f1)
            {
                ans = m;
                h = m-1;
            }
            else
                l = m+1;
        }
        return ans;
        
    }
