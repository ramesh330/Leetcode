int minimumOperations(int* nums, int numsSize) 
{
    int count=0;

    for(int i=0; i<numsSize; i++)
    count = count + (nums[i]%3!=0);

    return count;
}