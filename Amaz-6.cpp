vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        
        deque<int> d;
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            while(!d.empty() && arr[d.back()] < arr[i])
            {
                d.pop_back();
            }
            d.push_back(i);
        }
        ans.push_back(arr[d.front()]);
        for(int i = k;i<n;i++)
        {
            if((i-k) >= d.front())
            {
                d.pop_front();
            }
            while(!d.empty() && arr[d.back()] < arr[i])
            {
                d.pop_back();
            }
            d.push_back(i);
            ans.push_back(arr[d.front()]);
            
        }
        return ans;
    }
