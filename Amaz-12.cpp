string colName (long long int N)
    {
        string s = "";
        while(N)
        {
            if(N % 26 != 0) 
            s+=('A'+((N % 26-1)));
            else
            s+='Z';
            N/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
