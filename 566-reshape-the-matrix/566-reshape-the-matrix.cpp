class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size() , n = mat[0].size();
        if(m*n != c*r)
            return mat;
        vector<vector<int>>v(r , vector<int>(c));
        for(int i=0;i<m*n ;i++)
        {
            v[i/c][i%c] = mat[i/n][i%n];
        }
        return v;
    }
};