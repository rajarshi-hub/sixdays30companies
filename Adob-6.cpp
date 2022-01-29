void generate(int i,int n,int balance,string s,vector<string> &ans,int open,int close)
    {
        if(i == 2*n)
        {
            ans.push_back(s);
            return;
        }
        if(open < n)
        {
            generate(i+1,n,balance+1,s+'(',ans,open+1,close);
        }
        if(close < n && balance > 0)
        {
            generate(i+1,n,balance-1,s+')',ans,open,close+1);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        generate(0,n,0,"",ans,0,0);
        return ans;
    }
