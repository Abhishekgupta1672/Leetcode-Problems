class Solution {
public:
    int dfs(vector<vector<int>>&grid, int x, int y, int zeros){
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]==-1) return 0;
        if(grid[x][y]==2) return zeros==-1?1:0;
        grid[x][y] = -1;
        zeros--;
        int total = dfs(grid,x+1,y,zeros)+
            dfs(grid,x-1,y,zeros)+
            dfs(grid,x,y+1,zeros)+
            dfs(grid,x,y-1,zeros);
        grid[x][y] = 0;
        zeros++;
        return total;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int zeros = 0, sx = 0, sy = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0) zeros++;
                else if(grid[i][j]==1)
                {
                    sx = i;
                    sy = j;
                }
            }
        }
        return dfs(grid,sx,sy,zeros);
    }
};