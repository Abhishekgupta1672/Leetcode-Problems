class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int begin = 0 , end = m*n-1;
        while(begin<=end)
        {
            int mid = begin+(end-begin)/2;
            int midVal = matrix[mid/n][mid%n];
            
            if(midVal == target)
                return true;
            else if(midVal<target)
                begin = mid+1;
            else
                end = mid-1;
        }
        return false;
    }
};