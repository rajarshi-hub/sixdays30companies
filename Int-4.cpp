void comp(string &str,int k,int i,string &ans)
    {
        if(i == str.size() || k == 0)
        {
        if(str > ans)
        ans = str;
        return;
        }
        int ma = '0'-1;
        int mind; 
        for(int ind = i;ind<str.size();ind++)
        {
            if(ma < str[ind])
            {
                ma = str[ind];
                mind = ind;
            }
        }
        if(str[mind] == str[i])
        {
        comp(str,k,i+1,ans);
        return;
        }
        for(int ind = i;ind<str.size();ind++)
        {
            if(str[mind] != ma)
            continue;
        char c = str[i];
        str[i] = str[ind];
        str[ind] = c;
        comp(str,k-1,i+1,ans);
        c = str[i];
        str[i] = str[ind];
        str[ind] = c;
        }
    }
    string findMaximumNum(string str, int k)
    {
        string ans="";
        comp(str,k,0,ans);
        return ans;
    }
};
