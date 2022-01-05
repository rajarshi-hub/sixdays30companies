int n=arr.size();
        int inc[n];
        int dec[n];
        inc[0]=0;
        dec[n-1]=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i] > arr[i-1])
                inc[i]=inc[i-1]+1;
            else
            inc[i]=0;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i] > arr[i+1])
                dec[i]=dec[i+1]+1;
            else
                dec[i]=0;
        }
        int ma=0;
        int p;
        for(int i=0;i<n;i++)
        {
            if( dec[i]+inc[i] > ma && dec[i]!=0 && inc[i]!=0)
            {
                ma=dec[i]+inc[i];
                p=i;
            }
        }
        return ma == 0 ?0:ma+1;
