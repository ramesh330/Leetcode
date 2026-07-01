double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int total = nums1Size + nums2Size;
    int *merge = malloc(total*sizeof(int));
    int i=0,j=0,k=0;
    //merge two sorted arrays
    while(i<nums1Size && j<nums2Size)
    {
        if(nums1[i]<=nums2[j])
        merge[k++]=nums1[i++];
        else
        merge[k++]=nums2[j++];
    }
    //copy remaining elements
    while(i<nums1Size)
    merge[k++]=nums1[i++];
    while(j<nums2Size)
    merge[k++]=nums2[j++];
    //find median
    if(total%2==1) //middle element for odd
    return (double)merge[total/2];
    else
    return (merge[total/2] + merge[total/2-1])/2.0; //middle element for even

    free(merge);
}