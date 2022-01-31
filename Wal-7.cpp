vector<int> find3Numbers(vector<int> arr, int N) {
        int sm[N];
        int gr[N];
        int mi = arr[0];
        for(int i=1;i<N;i++)
        {
            sm[i] = mi;
            mi = min(mi,arr[i]);
        }
        int ma =arr[N-1];
        for(int i=N-2;i>=0;i--)
        {
            gr[i] = ma;
            ma = max(ma,arr[i]);
        }
        for(int i=1;i<N-1;i++)
        {
            if(arr[i] > sm[i] && arr[i] < gr[i])
            return {sm[i],arr[i],gr[i]};
        }
        return {};
    }
