/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes) 
{
    int n = gridSize * (*gridColSize);
    int *res = (int*)malloc(n * sizeof(int));
    int m=0;

    for(int i=0; i<gridSize; i++)
    for(int j=0; j<*gridColSize; j++)
    res[m++] = grid[i][j];

    for(int i=0; i<k%n; i++)
    {
        int temp = res[n-1];
        for(int i=n-1; i>0; i--)
        res[i] = res[i-1];

        res[0] = temp;
    }
    m=0;
    for(int i=0; i<gridSize; i++)
    for(int j=0; j<*gridColSize; j++)
    grid[i][j] = res[m++];

    *returnSize = gridSize;
    *returnColumnSizes = (int*)malloc(gridSize*sizeof(int));
    for(int i=0; i<gridSize; i++)
    (*returnColumnSizes)[i] = *gridColSize;

    return grid;
}