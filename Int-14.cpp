class Solution {
public:
    bool isvalid(int r,int c,int m,int n)
    {
        if(r < 0 || c < 0 || r >= m || c >= n)
            return false;
        return true;
    }
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1)
                q.push({i,j});
            }
        }
        int x[4] = {0,0,1,-1};
        int y[4] = {1,-1,0,0};
        int steps = 0;
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                pair<int,int> p = q.front();
                int X = p.first;
                int Y = p.second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int r = x[i]+X;
                    int c = y[i]+Y;
                    if(isvalid(r,c,m,n) && grid[r][c] == 0)
                    {
                        q.push({r,c});
                        grid[r][c] = 1;
                    }
                    
                }
                
            }
            steps++;
        }
        return steps-1 == 0?-1:steps-1;
    }
};
