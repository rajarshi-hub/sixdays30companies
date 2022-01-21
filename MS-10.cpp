int FindMaxSum(int arr[], int n)
    {
        int lootlast = arr[0];
        int notlootlast = 0;
        for(int i=1;i<n;i++)
        {
            int lootlastold = lootlast;
            lootlast = notlootlast+arr[i];
            notlootlast = max(lootlastold,notlootlast);
        }
        return max(lootlast,notlootlast);
    }
