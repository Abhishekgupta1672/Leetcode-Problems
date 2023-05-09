class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0 , right = n-1 , top = 0, bottom = m-1;
        int dir = 1;  
        vector<int>v;
        while(left<=right && top<=bottom){
            if(dir == 1){
                for(int i=left;i<=right;i++){
                    v.push_back(matrix[top][i]);

                }
                dir =2;
                top++;
            }
            else if(dir==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    v.push_back(matrix[i][right]);
                
                }
                    dir = 3;
                    right--;
            }
            else if(dir ==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[bottom][i]);
                   
                }
                 dir = 4;
                    bottom--;
            }
            else if(dir==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                    
                }
                dir = 1;
                    left++;
            }
        }
        return v;
    }
};