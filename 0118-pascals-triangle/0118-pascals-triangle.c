/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) 
{
    int **res = malloc(numRows*sizeof(int*));
    *returnSize = numRows;
    *returnColumnSizes = malloc(numRows*sizeof(int));

    for(int i=0; i<numRows; i++)
    {
        int rowLen = i+1;
        (*returnColumnSizes)[i] = rowLen;
        res[i] = malloc(rowLen*sizeof(int));

        for(int j=0; j<rowLen; j++)
        {
            if(j==0 || j==rowLen-1)
            res[i][j] = 1;
            else
            res[i][j] = res[i-1][j]+res[i-1][j-1];
        }
    }
    return res;
}