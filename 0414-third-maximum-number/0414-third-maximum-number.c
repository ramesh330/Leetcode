int thirdMax(int* nums, int numsSize) 
{
    long fmax=-2147483649,smax=-2147483649,tmax=-2147483649;
    
    for(int i=0;i<numsSize; i++)
    {
        if(nums[i]>fmax){
        tmax=smax;
        smax=fmax;
        fmax=nums[i];
        }
        else if(nums[i]>smax && nums[i]<fmax){
        tmax=smax;
        smax=nums[i];
        }
        else if(nums[i]>tmax && nums[i]<smax)
        tmax=nums[i];
    }
    if(numsSize<3 || tmax==-2147483649)
    return fmax;
    return tmax;
}