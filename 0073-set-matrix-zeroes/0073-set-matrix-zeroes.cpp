class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>res;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    res.push_back({i,j});
                }
            }
        }
        for(int i=0;i<res.size();i++)
        {
            int row = 0;
            int col = 0;
            int x = res[i].first;
            int y = res[i].second;
            while(row<m)
            {
                matrix[row][y]=0;
                row++;
            }
            while(col<n)
            {
                matrix[x][col]=0;
                col++;
            }
        }
        
    }
};