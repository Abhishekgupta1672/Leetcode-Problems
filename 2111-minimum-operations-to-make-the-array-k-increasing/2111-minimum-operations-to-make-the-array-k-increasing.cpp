class Solution {
public:
    int LIS(vector<int>&arr){
        int len = 1;
        vector<int>res;
        res.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(res.back()<=arr[i]){
                res.push_back(arr[i]);
                len++;
            }
            else{
                int index = upper_bound(res.begin(),res.end(),arr[i])-res.begin();
                res[index] = arr[i];
            }
        }
        return len;
    }
    int kIncreasing(vector<int>& arr, int k) {
        int ans = 0 , n = arr.size();
        for(int i=0;i<k;i++){
            vector<int>res;
            for(int j=i;j<n;j+=k){
                res.push_back(arr[j]);
            }
            ans+=res.size()-LIS(res);
        }
        return ans;
    }
};