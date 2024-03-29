class NumArray {
public:
    vector<int>v;
    int sum;
    NumArray(vector<int>& nums) {
        v = nums;
        sum = 0;
        for(auto i:nums)
            sum+=i;
    }
    
    void update(int index, int val) {
        sum-=v[index];
        v[index]=val;
        sum+=val;
    }
    
    int sumRange(int left, int right) {
        int res=sum; 
        for(int i=0;i<left;i++) 
            res-=v[i];
        for(int i=right+1;i<v.size();i++)
            res-=v[i];
        return res;
    }
};