class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0;
        int n = arr.size();
        while(i+1<n && arr[i+1]>arr[i]){
            i++;
        }
        if(i==n-1 || i==0) return false;
        while(i+1<n && arr[i+1]<arr[i]) i++;
        return i==n-1;
    }
};