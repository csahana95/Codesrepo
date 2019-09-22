class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    res = max(res, dfsFill(i,j,grid));
                }    
            }
        }
        return res;
    }
    int dfsFill(int row, int col, vector<vector<int>>&grid){
        int rLen = grid.size();
        int cLen = grid[0].size();
        
        int result =0;
        
        if(row<rLen&&row>=0 && col<cLen && col>=0 && grid[row][col]==1){
            grid[row][col]=0;
            result++;
            result+= dfsFill(row+1, col, grid);
            result+= dfsFill(row, col+1, grid);
            result+= dfsFill(row-1, col, grid);
            result+= dfsFill(row, col-1, grid);            
        }
        return result;
    }
    
};
