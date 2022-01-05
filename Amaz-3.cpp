vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && arr[i] > arr[dq.back()])
            dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        for(int i=k;i<n;i++)
        {
            if(i-k == dq.front())
            dq.pop_front();
            while(!dq.empty() && arr[i] > arr[dq.back()])
            dq.pop_back();
            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
