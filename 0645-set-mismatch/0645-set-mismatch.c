/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) 
{
    int flag[10001] = {0};
    int *res = (int *)malloc(2*sizeof(int));
    *returnSize = 2;

    int max = 0;
    for(int i=0; i<numsSize; i++)
    {
        flag[nums[i]]++;
        if(nums[i] > max)
        max = nums[i];
    }

    if(max==1) 
    {
        res[0] = 1;
        res[1] = 2;
        return res;
    }
    for(int i=1; i<=numsSize; i++)
    {
        if(flag[i] > 1)
        res[0] = i;
        if(flag[i] == 0)
        res[1] = i;
    }
    return res;
}