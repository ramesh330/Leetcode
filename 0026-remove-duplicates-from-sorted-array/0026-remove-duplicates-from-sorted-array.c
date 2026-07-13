int removeDuplicates(int* nums, int numsSize) {
    int k=0,flag=1;
    for(int i=0; i<numsSize; i++)
    {
        flag=1;
        for(int j=0; j<i; j++)
        {
            if(nums[i]==nums[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            nums[k++]=nums[i];
        }
    }
    return k;
}