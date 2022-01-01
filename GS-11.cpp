int *findTwoElement(int *arr, int n) {
        int *ans = new int[2];
        int x,y;
        x = y = 0;
        int xo = 0;
        for(int i=0;i<n;i++)
        xo^=arr[i];
        for(int i=1;i<=n;i++)
        xo^=i;
        int msb = xo&(~(xo-1));
        for(int i=0;i<n;i++)
        {
            if(msb & (arr[i]))
            x^=arr[i];
            else
            y^=arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(msb & i)
            x^=i;
            else
            y^=i;
        }
        for(int i=0;i<n;i++)
        {
        if(arr[i] == x)
        {
            ans[0] = x;
            ans[1] = y;
            return ans;
        }
        if(arr[i] == y)
        {
            ans[0] = y;
            ans[1] = x;
            return ans;
        }
        }
        
        
    }
