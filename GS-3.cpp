class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i,j;
        float p = 1.0;
        int c = 0;
        while(j < n)
        {
            if(p*a[j] < k)
            {
                p*=a[j];
                c+=(j-i+1);
                j++;
            }
            else
            {
                if(i == j)
                {
                    j++;               //Deviation from Normal Window Sliding just because we had to count the 
                }
                else
                p= (float)p/a[i];
                i++;
            }
        }
        return c;
        
    }
};
