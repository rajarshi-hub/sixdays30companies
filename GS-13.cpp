string decode(string s,int &ind)
    {
        string decoded = "";
        int no = 0;
        while(s[ind] != '[')
        {
            no*=10;
            no+=s[ind]-'0';
            ind++;
        }
        ind++;
        string ans = "";
        while(s[ind] != ']')
        {
           if(s[ind] >= '0' && s[ind] <= '9')
            {
                ans+=decode(s,ind);
            }
            else
            {
                ans+=s[ind];
            } 
            ind++;
        }
        for(int i=0;i<no;i++)
            decoded+=ans;
        return decoded;
    }
    string decodeString(string s) {
        string k = "1[";
        s = k + s+"]";
        int ind = 0;
        return decode(s,ind);
        
    }
