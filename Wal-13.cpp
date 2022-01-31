
bool comp(string s1,string s2)
    {
        if(s1.size() != s2.size())
        return s1.size() > s2.size();
        int n = s1.size();
        for(int i=0;i<n;i++)
        {
            if(s1[i] > s2[i])
                return true;
            if(s1[i] < s2[i])
                return false;
        }
        return false;
    }
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),comp);
        return nums[k-1];
    }
};
