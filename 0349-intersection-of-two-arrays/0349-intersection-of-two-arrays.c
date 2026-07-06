/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
    int k=0;
    int flag[1001] = {0};
    for(int i=0; i<nums1Size; i++)
    flag[nums1[i]] = 1;

    int size = (nums1Size<nums2Size) ? nums1Size : nums2Size;
    int *res = malloc(size*sizeof(int));

    for(int i=0; i<nums2Size; i++)
    if(flag[nums2[i]])
    {
        res[k++] = nums2[i];
        flag[nums2[i]] = 0;
    }
    *returnSize = k;
    return res;
}