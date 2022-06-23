class Solution {
public:
    static bool cmp(vector<int>&a , vector<int>&b)
    {
        return a[1]<b[1];
    };
    int scheduleCourse(vector<vector<int>>& c) {
        sort(c.begin() , c.end() , cmp);
        priority_queue<int>pq;
        int sum = 0;
        for(auto i:c)
        {
            sum+=i[0];
            pq.push(i[0]);
            if(sum>i[1])
            {
                sum-=pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};