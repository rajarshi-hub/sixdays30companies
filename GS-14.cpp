int minSubArrayLen(int target, vector<int>& a) {
        
        int i,j;
        i=j=0;
        int n=a.size();
        int s=0;
        int ma=INT_MAX;
        while(j<n)
        {
            if(s+a[j] < target)
            {
                s+=a[j];
                j++;
            }
            else
            {
                ma = min(ma,j-i+1);
                s-=a[i];
                i++;
            }
        }
        if( ma == INT_MAX)
            return 0;
        return ma;
        
    }
