/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) 
{
    int * arr = (int *)malloc((n+1)*sizeof(int));
    arr[0] = 0;
     *returnSize = n+1;
    if(n==0) return arr;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        arr[i] = arr[i/2];
        else
        arr[i] = arr[i-1]+1;
    }
    return arr;
}