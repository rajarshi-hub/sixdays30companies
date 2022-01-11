string findOrder(string dict[], int N, int K) {
        vector<int> graph[K];
        unordered_map<char,int> mp;
        for(int i=0;i<N-1;i++)
        {
            int j = i+1;
                int k = 0;
                while(k < dict[i].size() && k < dict[j].size() && dict[i][k] == dict[j][k])
                {
                    k++;
                }
                if(k < dict[i].size() && k < dict[j].size())
                {
                    graph[dict[i][k]-'a'].push_back(dict[j][k]-'a');
                    mp[dict[j][k]-'a']++;
                }
        }
        queue<char> q;
        for(int i=0;i<K;i++)
        {
            if(mp.count(i) == 0)
            q.push(i);
        }
        string ans = "";
        while(!q.empty())
        {
            int ch = q.front();
            q.pop();
            ans+=ch+'a';
            for(auto &dep:graph[ch])
            {
                if(--mp[dep] == 0)
                q.push(dep);
            }
        }
       return ans;
        
    }
