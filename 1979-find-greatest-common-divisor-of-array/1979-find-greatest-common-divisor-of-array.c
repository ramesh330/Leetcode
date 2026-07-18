int findGCD(int* nums, int numsSize) 
{
    for(int i=0; i<numsSize-1; i++)
    for(int j=0; j<numsSize-i-1; j++)
    {
        if(nums[j]>nums[j+1])
        {
            int temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = temp;
        }
    }

    int max=1;
    for(int i=2; i<=nums[numsSize-1]; i++)
    if(nums[0]%i==0 && nums[numsSize-1]%i==0)
    max=i;
    return max;   
}