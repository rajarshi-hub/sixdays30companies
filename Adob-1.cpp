vector<int> subarraySum(int arr[], int n, long long s)
    {
    
        long long sum = 0;
        int i,j;
        i = j = 0;
        int ss,ee;
        ss = ee = -1;
        while(j < n)
        {
            if(sum+arr[j] <= s)
            {
                if(sum+arr[j] == s && ss == -1)
                {
                    ss = i;
                    ee = j;
                }
                sum+=arr[j];
                j++;
            }
            else
            {
                sum-=arr[i];
                i++;
            }
        }
        if(ss == -1)
        return {-1};
        return {ss+1,ee+1};
    }
