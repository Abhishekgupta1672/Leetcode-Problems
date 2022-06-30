class Solution {
public:
   struct cmp
   {
       bool operator()(string &s1,string &s2) {
           if(s1.size()!=s2.size())
               return s1.size()>s2.size();
           return s1>s2;
        }
   };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string , vector<string> , cmp>pq;
        for(int i=0;i<k;i++)
        {
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++)
        {
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};