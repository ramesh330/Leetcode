int findMiddleIndex(int* nums, int numsSize) 
{
    for(int i=0; i<numsSize; i++)
    {
        int leftSum=0,rightSum=0;
        for(int j=0; j<i; j++)
        leftSum+=nums[j];

        for(int k=i+1; k<numsSize; k++)
        rightSum+=nums[k];

        if(leftSum==rightSum)
        {
            if(i==0 || i==numsSize) return 0;
            else return i;
        }
    }
    return -1;
}