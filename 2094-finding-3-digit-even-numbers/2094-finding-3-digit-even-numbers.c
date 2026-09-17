/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) 
{
    int *res = malloc(1000*sizeof(int));
    int arr[1000] = {0};
    int idx = 0;

    for(int i=0; i<digitsSize; i++)
    for(int j=0; j<digitsSize; j++)
    for(int k=0; k<digitsSize; k++)
    {
        if(i==j || i==k || j==k)
        continue;

        if(digits[i]==0)
        continue;

        if(digits[k]%2 != 0)
        continue;

        int num = digits[i] * 100 + digits[j] * 10 + digits[k];

        if(arr[num] == 0)
        {   arr[num] = 1;
            res[idx++] = num;
        }
    }

    for(int i=0; i<idx-1; i++)
    for(int j=0; j<idx-i-1; j++)
    if(res[j]>res[j+1])
    {
        int temp = res[j];
        res[j] = res[j+1];
        res[j+1] = temp;
    }
    
    *returnSize = idx;
    return res;
}