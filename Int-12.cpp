bool comp(vector<int> &a,vector<int> &b)
{
    return a[1] < b[1];
}
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),comp);
        priority_queue<int> pq;
        int tot_time = 0;
        for(auto &i:courses)
        {
            if(tot_time+i[0] <= i[1])
            {
                pq.push(i[0]);
                tot_time+=i[0];
            }
            else
            {
                if(pq.empty())
                    continue;
                int maxt = pq.top();
                if(tot_time-maxt+i[0] <= i[1] && tot_time > tot_time-maxt+i[0])
                {
                    pq.pop();
                    tot_time = tot_time-maxt+i[0];
                    pq.push(i[0]);
                }
            }
        }
        return pq.size();
    }
};
