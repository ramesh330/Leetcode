int missingNumber(int* nums, int numsSize) 
{
    int res=0,res2=0;
    for(int i=1; i<=numsSize; i++)
    res = res ^ i;
    for(int i=0; i<numsSize; i++)
    res2 = res2 ^ nums[i];
    return res ^ res2;    
}