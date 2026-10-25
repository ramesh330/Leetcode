void dfs(int **grid, int r, int c, int rows, int cols, int *closed)
{
    // Outside the grid -> island touches boundary
    if(r < 0 || r >= rows || c < 0 || c >= cols)
    {
        *closed = 0;
        return;
    }

    // Already water
    if(grid[r][c] == 1)
        return;

    // Mark this 0 as visited
    grid[r][c] = 1;

    // Explore all 4 directions
    dfs(grid, r - 1, c, rows, cols, closed);
    dfs(grid, r + 1, c, rows, cols, closed);
    dfs(grid, r, c - 1, rows, cols, closed);
    dfs(grid, r, c + 1, rows, cols, closed);
}

int closedIsland(int** grid, int gridSize, int* gridColSize)
{
    int res = 0;
    int cols = *gridColSize;

    for(int i = 0; i < gridSize; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(grid[i][j] == 0)
            {
                int closed = 1;

                dfs(grid, i, j, gridSize, cols, &closed);

                if(closed)
                    res++;
            }
        }
    }

    return res;
}