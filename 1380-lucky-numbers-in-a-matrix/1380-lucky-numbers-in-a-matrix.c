/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) 
{
    int row=matrixSize,col= matrixColSize[0];
    
    int * res = malloc(sizeof(int));
    *returnSize = 0;

    for(int i=0; i<row; i++)
    {
        //finding the min value from row
        int min = matrix[i][0];
        int f=0;
        for(int j=1; j<col; j++)
        {
            if(matrix[i][j] < min)
            {
                min = matrix[i][j];
                f=j;
            }
        }

        //cheacking the max value from the col
        int flag=1;
        for(int k=0; k<row; k++)
        {
            if(matrix[k][f]>min)
            {
                flag=0;
                break;
            }
        }

        //if greater than min value is not found return array
        if(flag)
        {
            res[0] = min;
            *returnSize = 1;
            return res;
        }
    }
    return res;
}