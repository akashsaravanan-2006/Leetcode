class Solution {
    public int countNegatives(int[][] grid) {
        int r=grid.length;       
        int c=grid[0].length;
        int c1=0;
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        if(grid[i][j]<0)
        c1++;
        return c1;     

    }
}