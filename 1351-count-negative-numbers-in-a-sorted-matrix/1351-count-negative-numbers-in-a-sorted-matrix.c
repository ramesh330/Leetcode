int countNegatives(int** grid, int gridSize, int* gridColSize) 
{
    int col= *gridColSize-1,row=gridSize-1;
    int count=0;

    for(int i=row; i>=0; i--)
    for(int j=col; j>=0; j--)
    {
        if(grid[i][j] < 0)
        count++;
        else
        break;
    }
    return count;
}