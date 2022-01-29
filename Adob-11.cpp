string amendSentence (string s)
    {
        string ans = "";
        for(int i=0;i<s.size();)
        {
            string sm = "";
            if(s[i] < 97)
            {
            sm+=s[i]+32;
            i++;
            }
            else
            {
            sm+=s[i];
            i++;  
            }
            while(i < s.size() && s[i] >= 97)
            {
                sm+=s[i];
                i++;
            }
            ans+=sm;
            ans+=" ";
            
        }
        ans.erase(ans.end()-1);
        return ans;
    }
