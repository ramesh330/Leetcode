/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    //Array traverse from last
    for(int i=digitsSize-1; i>=0; i--)
    {
        if(digits[i]<9)
        {
            //current digit is less than 9. just add 1 and return
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        //current digit is 9, become 0
        digits[i]=0;
    }
    //if all elements are 9 - (999->1000)
    int *res = malloc((digitsSize+1)*sizeof(int));
    res[0]=1; //put the first digit is 1 and rest 0
    for(int i=1; i<=digitsSize; i++)
    res[i]=0;
    *returnSize = digitsSize+1;
    return res;
}