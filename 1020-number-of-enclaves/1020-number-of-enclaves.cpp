class Solution {
public:
    int dfs(vector<vector<int>>&grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0) return 0;
        grid[i][j] = 0;
        return 1+dfs(grid,i+1,j)+dfs(grid,i,j+1)+dfs(grid,i-1,j)+dfs(grid,i,j-1);
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int all_one = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++)
                all_one += grid[i][j];
        }
        int close_one = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if((i==0 || j==0 || i==grid.size()-1 || j==grid[0].size()-1) && grid[i][j] == 1) close_one+=dfs(grid,i,j);
            }
        }
        return all_one - close_one;
    }
};