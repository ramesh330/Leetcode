void sortColors(int* nums, int numsSize) 
{
    int red=0,white=0,blue=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]==0) red++;
        else if(nums[i]==1) white++;
        else blue++;
    }

    for(int i=0; i<numsSize; i++)
    {
        if(red>0)
        {
            nums[i] = 0;
            red--;
            continue;
        }
        if(white>0)
        {
            nums[i] = 1;
            white--;
            continue;
        }
        if(blue>0)
        {
            nums[i] = 2;
            blue--;
        }
    }
}