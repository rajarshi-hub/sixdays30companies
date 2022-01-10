int orangesRotting(vector<vector<int>>& grid) {
        
        
        queue<pair<int,int>> q;
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                q.push(make_pair(i,j));
            }
        }
        while(!q.empty())
        {
            bool f=false;
            int s= q.size();
            while(s--)
            {
                pair<int,int> p=q.front();
                q.pop();
                int i=p.first;
                int j=p.second;
                if( i+1<n && grid[i+1][j]==1 )
                {
                    f=true;
                    grid[i+1][j]=2;
                    q.push(make_pair(i+1,j));
                }
                if( i-1>=0 && grid[i-1][j]==1 )
                {
                    f=true;
                    grid[i-1][j]=2;
                    q.push(make_pair(i-1,j));
                }
                if( j-1>=0 && grid[i][j-1]==1 )
                {
                    f=true;
                    grid[i][j-1]=2;
                    q.push(make_pair(i,j-1));
                }
                if( j+1<m && grid[i][j+1]==1 )
                {
                    f=true;
                    grid[i][j+1]=2;
                    q.push(make_pair(i,j+1));
                }
                
            }
            if(f)
            c++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        
        return c;
    }
