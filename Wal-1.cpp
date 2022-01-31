class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        vector<vector<pair<int,double>>> graph(n);
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back({edges[i][1],succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double>prob(n,0);
        vector<bool> vis(n,false);
        prob[start]=1;
        set<pair<double,int>> s;
        for(int i=0;i<n;i++)
        {
            if(start == i)
            s.insert({1,i});
            else
            s.insert({0,i});
        }
        for(int i=0;i<n;i++)
        {
            pair<double,int> p=*(s.rbegin());
            s.erase(p);
            vis[p.second]=1;
            if(p.second == end)
                return p.first;
            for(int k=0;k<graph[p.second].size();k++)
            {
                int j=graph[p.second][k].first;
                if(!vis[j] && prob[j] < prob[p.second]*graph[p.second][k].second)
                {
                    s.erase({prob[j],j});
                    prob[j]=prob[p.second]*graph[p.second][k].second;
                    s.insert({prob[j],j});
                }
            }
        }
        return 0;
        
        
    }
};
