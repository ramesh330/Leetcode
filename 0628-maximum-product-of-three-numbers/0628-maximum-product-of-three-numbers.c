int comp(const void*a,const void *b)
{
    return (*(int*)a)-(*(int*)b);
}

int maximumProduct(int* nums, int numsSize) 
{
    qsort(nums,numsSize,sizeof(int),comp);
    int n=numsSize;
    int res1 = nums[0]*nums[1]*nums[n-1];
    int res2 = nums[n-1]*nums[n-2]*nums[n-3];
    return res1>res2 ? res1 : res2;
}