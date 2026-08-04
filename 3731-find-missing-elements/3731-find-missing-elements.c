/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) 
{
    int flag[101] = {0};
    int s=nums[0],l=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]>=l) l=nums[i];
        else if(nums[i]<=s) s=nums[i];
        flag[nums[i]] = nums[i];
    }
    int *res = malloc(l*sizeof(int));
    int k=0;
    for(int i=s; i<=l; i++)
    {
        if(flag[i] == 0)
        res[k++] = i;
    }
    *returnSize = k;
    return res;
}