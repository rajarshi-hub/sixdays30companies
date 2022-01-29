 bool check(int i,int j,vector<vector<char>>& board,string word,int k,int n,int m)
    {
        if(k >= word.size())
            return false;
        if(i<0 || j<0 ||i>=n || j>=m || board[i][j]!=word[k])
        {
            return false;
        }
        if(k==word.size()-1)
        {
            return true;
        }
        char c=board[i][j];
        board[i][j]='*';
        if(check(i+1,j,board,word,k+1,n,m))
        {
            return true;
        }
        if(check(i-1,j,board,word,k+1,n,m))
        {
            return true;
        }
        if(check(i,j+1,board,word,k+1,n,m))
         {
            return true;
        }
        if(check(i,j-1,board,word,k+1,n,m))
        {
            return true;
        }
        board[i][j]=c;
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        cout<<n<<" "<<m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(check(i,j,board,word,0,n,m))
                    return true;
            }
        }
        return false;
        
    }
};
