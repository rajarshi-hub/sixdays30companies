int numberOfBoomerangs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            unordered_map<double,int> mp;
            for(int j=0;j<n;j++)
            {
                if(i == j)
                    continue;
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];
                double dist = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
                ans+=mp[dist]*2;
                mp[dist]++;
            }
        }
        return ans;
        
    }
