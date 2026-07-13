int searchInsert(int* nums, int numsSize, int target) {
    int low=0,high=numsSize-1,med;
    
    while(low<=high)
    {
        med=(low + high)/2;
        if(target==nums[med]){
        return med;
        }

        else if(target>nums[med]){
        low=med+1;
        }

        else{
        high=med-1;
        }
    }
    return low;
}