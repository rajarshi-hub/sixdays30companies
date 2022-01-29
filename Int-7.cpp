int day(vector<int> &w , int c)
{
    
    
    int d=0;
    int s=0;
    for(int i=0;i<w.size();i++)
    {
        s+=w[i];
        if(s > c)
        {
            d++;
            s=0;
        i--;
        }
    }
    if(s > 0)
        d++;
    return d;
}
    
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        
        int s=0;
        int ma=0;
        for(int i=0;i<weights.size();i++)
        {
         s+=weights[i];  
            ma=max(ma,weights[i]);
        }
        int h=s;
        int l=ma;
        int res=0;
        while(l <= h)
        {
            int m=(l+h)/2;
            if(day(weights,m) <= days)
            {
                res=m;
                h=m-1;
            }
            else
                l=m+1;
        }
        return res;
        
    }
};
