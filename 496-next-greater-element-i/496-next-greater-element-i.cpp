class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                if(j==m-1)
                {
                    v.push_back(-1);
                    break;
                }
                else
                {
                    for(int k=j+1;k<m;k++)
                    {
                        if(nums2[k]>nums1[i])
                        {
                            v.push_back(nums2[k]);
                            break;
                        }
                        else if(k==m-1)
                        {
                            v.push_back(-1);
                        }
                    }
                }
                break;
                }
            }
        }
        return v;
    }
};