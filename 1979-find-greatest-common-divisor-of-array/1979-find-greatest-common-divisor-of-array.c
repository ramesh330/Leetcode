int findGCD(int* nums, int numsSize) 
{
    int s=10001,l=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] < s)
        s = nums[i];
        if(nums[i] > l)
        l = nums[i];
    }
    int max=1;
    for(int i=2; i<=s; i++)
    if(s%i==0 && l%i==0)
    max=i;
    return max;   
}