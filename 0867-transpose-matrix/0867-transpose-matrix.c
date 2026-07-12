/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) 
{
    int **arr = malloc(*matrixColSize*sizeof(int*));
    for(int i=0; i<(*matrixColSize); i++)
    arr[i] = malloc(matrixSize*sizeof(int));

    for(int i=0; i<(*matrixColSize); i++)
    for(int j=0; j<matrixSize; j++)
    arr[i][j] = matrix[j][i];

    *returnColumnSizes = malloc((*matrixColSize)*sizeof(int));
    for(int i=0; i<(*matrixColSize); i++)
    (*returnColumnSizes)[i] = matrixSize;  

    *returnSize =(*matrixColSize);
    return arr;
}