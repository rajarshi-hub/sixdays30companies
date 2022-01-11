bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    vector<int> graph[N];
	    vector<int> indeg(N,0);
	    for(auto edge:prerequisites)
	    {
	        graph[edge.second].push_back(edge.first);
	        indeg[edge.first]++;
	    }
	    queue<int> q;
	    int nodecomp = 0;
	    for(int i=0;i<N;i++)
	    {
	        if(indeg[i] == 0)
	        {
	        q.push(i);
	        nodecomp++;
	        }
	    }
	    while(!q.empty())
	    {
	        int par = q.front();
	        q.pop();
	        for(auto adj:graph[par])
	        {
	            if(--indeg[adj] == 0)
	            {
	                q.push(adj);
	                nodecomp++;
	            }
	        }
	    }
	    return nodecomp == N;
	    
	    
	}
