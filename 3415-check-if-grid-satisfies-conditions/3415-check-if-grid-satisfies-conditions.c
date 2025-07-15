bool satisfiesConditions(int** grid, int gridSize, int* gridColSize) {
    int i,j;
    for(int i=0;i<gridSize;i++)
    for(int j=0;j<*gridColSize;j++)
    if(i+1<gridSize && grid[i][j]!=grid[i+1][j] || j+1<*gridColSize && grid[i][j]==grid[i][j+1])
    return false;
    return true;
}