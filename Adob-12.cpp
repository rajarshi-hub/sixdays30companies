 vector<int> leaders(int a[], int n){
        int ma = 0;
        vector<int> ans;
        for(int i=n-1;i>=0;i--)
        {
            if(ma <= a[i])
            ans.push_back(a[i]);
            ma = max(a[i],ma);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
