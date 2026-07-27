int maxProduct(int* nums, int numsSize) 
{
    int fmax=0,smax=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] > fmax)
        {
            smax = fmax;
            fmax = nums[i];
        }
        else if(nums[i] > smax && nums[i] <= fmax)
        smax = nums[i] ;
    }
    return (fmax-1)*(smax-1);
}