/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void backtracking(int *nums,int n, int index, int **res, int *returnSize)
{
    if(index==n)
    {
        res[*returnSize] = malloc(n*sizeof(int));
        for(int i=0; i<n; i++)
        res[*returnSize][i] = nums[i];

        (*returnSize)++;
        return;
    }

    for(int i=index; i<n; i++)
    {
        int temp = nums[index];
        nums[index] = nums[i];
        nums[i] = temp;

        backtracking(nums,n,index+1,res,returnSize);

        temp = nums[index];
        nums[index] = nums[i];
        nums[i] = temp;

    }
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) 
{
    int total=1;
    for(int i=2; i<=numsSize; i++)
    total*=i;

    int **res = malloc(total * sizeof(int *));
    *returnSize = 0;

    *returnColumnSizes = malloc(total * sizeof(int));

    backtracking(nums,numsSize,0,res,returnSize);

    for(int i=0; i<*returnSize; i++)
    (*returnColumnSizes)[i] = numsSize;

    return res;
}