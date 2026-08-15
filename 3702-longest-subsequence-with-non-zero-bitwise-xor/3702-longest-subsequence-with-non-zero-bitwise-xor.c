int longestSubsequence(int* nums, int numsSize) 
{
    int res=0;
    int NonZero=0;
    for(int i=0; i<numsSize; i++)
    {
        res ^= nums[i];

        if(nums[i]!=0)
        NonZero = 1;
    }

    if(res!=0) return numsSize;
    if(NonZero) return numsSize-1;
    return 0;
}