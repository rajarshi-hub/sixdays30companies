bool validcol(vector<vector<int>> &mat,int n)
    {
        for(int i=0;i<n;i++)
        {
            int num[10]={0};
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] == 0)
                continue;
                num[mat[i][j]]++;
                if(num[mat[i][j]] >= 2)
                return false;
            }
        }
        return true;
    }
    bool validrow(vector<vector<int>> &mat,int n)
    {
        for(int j=0;j<n;j++)
        {
            int num[10]={0};
            for(int i=0;i<n;i++)
            {
                if(mat[i][j] == 0)
                continue;
                num[mat[i][j]]++;
                if(num[mat[i][j]] >= 2)
                return false;
            }
        }
        return true;
    }
    bool validblock(vector<vector<int>> &mat,int n)
    {
        for(int i=0;i<n;i+=3)
        {
            for(int j=0;j<n;j+=3)
            {
                int num[10]={0};
                for(int k=i;k<i+3;k++)
                {
                    for(int g = j;g<j+3;g++)
                    {
                         if(mat[k][g] == 0)
                          continue;
                          num[mat[k][g]]++;
                          if(num[mat[k][g]] >= 2)
                           return false;
                    }
                }
            }
        }
        return true;
    }
    int isValid(vector<vector<int>> mat){
        if (mat.size() != 9 && mat[0].size() != 9)
        {
            return 0;
        }
        int n = mat.size();
        if(!validcol(mat,n))
        return 0;
        if(!validrow(mat,n))
        return 0;
        if(!validblock(mat,n))
        return 0;
        return 1;
    }
