/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) 
{
    int left = 0, right = *matrixColSize-1;
    int top = 0 , bottom = matrixSize -1;
    int *res = malloc((matrixSize)*(* matrixColSize)*4);
    int k = 0;
    while(top<=bottom && left<=right)
    {
        //top row : left->right
        for(int i=left; i<=right; i++)
        res[k++] = matrix[top][i];

        top++;
        //right column : top->bottom
        for(int i=top; i<=bottom; i++)
        res[k++] = matrix[i][right];

        right--;
        //bottom row : right->left
        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)
            res[k++] = matrix[bottom][i];
            bottom--;
        }
        //left column : bottom->top
        if(left<=right)
        {
            for(int i=bottom; i>=top; i--)
            res[k++] = matrix[i][left];
            left++;
        }
    }
    *returnSize = k;
    return res;
}