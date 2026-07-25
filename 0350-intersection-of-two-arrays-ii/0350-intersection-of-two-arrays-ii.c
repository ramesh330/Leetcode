/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
    int size = nums1Size>nums2Size ? nums1Size : nums2Size;
    int *res = malloc(size*sizeof(int));
    int flag[1001] = {0};

    for(int i=0; i<nums1Size; i++)
    flag[nums1[i]]++;

    int k=0;
    for(int i=0; i<nums2Size; i++)
    if(flag[nums2[i]]){
    res[k++] = nums2[i];
    flag[nums2[i]]--;
    }

    *returnSize = k;
    return res;
}