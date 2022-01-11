vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int> > ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;)
        {
            for(int j=i+1;j<n;)
            {
                int s = arr[i]+arr[j];
                int tar = k-s;
                int l,h;
                l = j+1;
                h = n-1;
                while(l < h)
                {
                    if(arr[l] +arr[h] < tar)
                    l++;
                    else
                    if(arr[l]+arr[h] > tar)
                    h--;
                    else
                    {
                        vector<int> v = {arr[i],arr[j],arr[l],arr[h]};
                        ans.push_back(v);
                        l++;
                        while(l < h && arr[l] == arr[l-1])l++;
                        h--;
                        while(l < h && arr[h] == arr[h+1])h--;
                    }
                }
                j++;
                while(j < n && arr[j] == arr[j-1])j++;
            }
            i++;
            while(i < n && arr[i] == arr[i-1])i++;
        }
        return ans;
    }
