class Solution {
public:
    void dfs(int i,vector<vector<int>>& con,int n, vector<bool> &vis)
    {
        vis[i] = true;
        for(int it= 0;it<n;it++)
        {
            if(con[i][it] && !vis[it])
                dfs(it,con,n,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n,false);
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,isConnected,n,vis);
                ans++;
            }
                
        }
        return ans;
    }
};
