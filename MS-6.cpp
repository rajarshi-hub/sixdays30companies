void poss(string s,int i,vector<string> &ans,int a[],int N)
    {
        if(i == N)
        {
            ans.push_back(s);
            return;
        }
        if(a[i] == 2)
        {
            poss(s+'a',i+1,ans,a,N);
            poss(s+'b',i+1,ans,a,N);
            poss(s+'c',i+1,ans,a,N);
        }
        if(a[i] == 3)
        {
            poss(s+'d',i+1,ans,a,N);
            poss(s+'e',i+1,ans,a,N);
            poss(s+'f',i+1,ans,a,N);
        }
        if(a[i] == 4)
        {
            poss(s+'g',i+1,ans,a,N);
            poss(s+'h',i+1,ans,a,N);
            poss(s+'i',i+1,ans,a,N);
        }
        if(a[i] == 5)
        {
            poss(s+'j',i+1,ans,a,N);
            poss(s+'k',i+1,ans,a,N);
            poss(s+'l',i+1,ans,a,N);
        }
        if(a[i] == 6)
        {
            poss(s+'m',i+1,ans,a,N);
            poss(s+'n',i+1,ans,a,N);
            poss(s+'o',i+1,ans,a,N);
        }
        if(a[i] == 7)
        {
            poss(s+'p',i+1,ans,a,N);
            poss(s+'q',i+1,ans,a,N);
            poss(s+'r',i+1,ans,a,N);
            poss(s+'s',i+1,ans,a,N);
        }
        if(a[i] == 8)
        {
            poss(s+'t',i+1,ans,a,N);
            poss(s+'u',i+1,ans,a,N);
            poss(s+'v',i+1,ans,a,N);
        }
        if(a[i] == 9)
        {
            poss(s+'w',i+1,ans,a,N);
            poss(s+'x',i+1,ans,a,N);
            poss(s+'y',i+1,ans,a,N);
            poss(s+'z',i+1,ans,a,N);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> ans;
        poss("",0,ans,a,N);
        return ans;
    }
