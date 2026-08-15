/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** construct2DArray(int* original, int originalSize, int m, int n, int* returnSize, int** returnColumnSizes) 
{
    int **res;
    if((m*n)!=originalSize)
    {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return res;
    }

    res = (int**)malloc(m*sizeof(int*));
    for(int i=0; i<m; i++)
    res[i] = (int*)malloc(n*sizeof(int));

    *returnSize = m;
    *returnColumnSizes = (int*)malloc(m*sizeof(int));
    for(int i=0; i<m; i++)
    (*returnColumnSizes)[i] = n;

    int k=0;
    for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
    res[i][j] = original[k++];

    return res;
}