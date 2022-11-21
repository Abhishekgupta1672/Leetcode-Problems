class Solution {
public:
    int nearestExit(vector<vector<char>>&maze, vector<int>&e) {
        queue<pair<int,int>>q;
        q.push({e[0],e[1]});
        int rows = maze.size();
        int cols = maze[0].size();
        int moves = 1;
        vector<vector<int>>res = {{1,0},{-1,0},{0,-1},{0,1}};
        maze[e[0]][e[1]] = '+';
        while(!q.empty()){
            int sz = q.size();
            for(int l=0;l<sz;l++){
                auto[i,j] = q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int x = i+res[k][0];
                    int y = j+res[k][1];
                    if(x<0 || y<0 || x>=rows || y>=cols || maze[x][y]=='+')
                        continue;
                    if(x==0 || y==0 || x==rows-1 || y==cols-1)
                        return moves;
                    maze[x][y] = '+';
                    q.push({x,y});
                }
            }
            moves++;
        }
        return -1;
    }
};