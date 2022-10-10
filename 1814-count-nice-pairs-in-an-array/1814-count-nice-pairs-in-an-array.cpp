class Solution {
public:
    int rev(int n){
        int res = 0;
        while(n){
            res = res*10+(n%10);
            n/=10;
        }
        return res;
    }
    
    int countNicePairs(vector<int>& nums) {
       	long count = 0;
	    unordered_map<int,long>mp;
	    for(auto &num : nums) mp[num - rev(num)]++; 
	    for(auto &pair : mp)
		count = (count + (pair.second * (pair.second - 1)) / 2) % 1000000007; 
	    return count;
    }
};