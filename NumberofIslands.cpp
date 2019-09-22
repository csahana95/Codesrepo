class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1')
                {
                    dfsFill(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
    void dfsFill(int row, int col, vector<vector<char>>&grid){
        int rLen = grid.size();
        int cLen = grid[0].size();
        
        if(row<rLen&&row>=0 && col<cLen && col>=0 && grid[row][col]=='1'){
            grid[row][col]='0';
            dfsFill(row+1, col, grid);
            dfsFill(row, col+1, grid);
            dfsFill(row-1, col, grid);
            dfsFill(row, col-1, grid);            
        }
    }
};
