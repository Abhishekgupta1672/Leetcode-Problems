class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                    continue;
                int top = m+n, left = m+n;
                if(i-1 >= 0)
                    top = matrix[i-1][j];
                if(j-1 >= 0)
                    left = matrix[i][j-1];
                matrix[i][j] = min(left , top)+1;
            }
        }
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(matrix[i][j]==0)
                    continue;
                int right = m+n , bottom = m+n;
                if(i+1 < m)
                    bottom = matrix[i+1][j];
                if(j+1 < n)
                    right = matrix[i][j+1];
                 matrix[i][j] = min(matrix[i][j] , min(bottom , right)+1);   
            }
        }
        return matrix;
    }
};


