bool isvalid(int i,int j,int m,int n)
    {
        if(i >= m || j>=n || i<0 || j<0)
        return false;
        return true;
    }
    void dfs(int i,int j,int m,int n,vector<vector<bool>> &vis,vector<vector<int>>& grid,int &c)
    {
        vis[i][j] = true;
        c++;
        int x[]={1,-1,0,0,1,1,-1,-1};
        int y[]={0,0,1,-1,1,-1,1,-1};
        for(int k=0;k<8;k++)
        {
            if(isvalid(i+x[k],j+y[k],m,n) && grid[i+x[k]][j+y[k]]== 1 && !vis[i+x[k]][j+y[k]])
            dfs(i+x[k],j+y[k],m,n,vis,grid,c);
        }
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        int ma = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j] && grid[i][j] == 1)
                {
                    int c = 0;
                 dfs(i,j,m,n,vis,grid,c);
                 ma = max(c,ma);
                }
            }
        }
        return ma; 
    }
