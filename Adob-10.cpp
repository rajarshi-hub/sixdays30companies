vector<string> winner(string arr[],int n)
    {
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int ma = 0;
        string s;
        for(auto &i:mp)
        {
            if(ma < i.second)
            {
                ma = i.second;
                s = i.first;
            }
        }
        return {s,to_string(ma)};
