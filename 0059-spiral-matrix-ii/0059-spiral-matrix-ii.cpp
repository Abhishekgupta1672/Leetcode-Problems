class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int j = 1 , top = 0 , bottom = n-1 , left = 0 , right = n-1;
        vector<vector<int>>v(n , vector<int>(n));
        int dir = 1;
        while(left<=right && top<=bottom)
        {
            if(dir==1)
            {
                for(int i=left;i<=right;i++)
                {
                    v[left][i] = j;
                    j++;
                }
                dir = 2;
                top++;
            }
            else if(dir==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    v[i][right] = j;
                    j++;
                }
                dir = 3;
                right--;
            }
            else if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v[bottom][i] = j;
                    j++;
                }
                dir = 4;
                bottom--;
            }
            else if(dir==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v[i][left] = j;
                    j++;
                }
                dir = 1;
                left++;
            }
        }
        return v;
    }
};