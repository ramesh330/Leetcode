/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) 
{
    int *arr = calloc(numsSize+1,sizeof(int));
    int *res = malloc(numsSize*sizeof(int));
    int k=0;
 
    for(int i=0; i<numsSize; i++)
    arr[nums[i]] = 1;
    for(int i=1; i<=numsSize; i++)
    {
        if(arr[i] != 1)
        res[k++] = i;
    }
    res = realloc(res,k*sizeof(int));
    *returnSize = k;
    return res;
}