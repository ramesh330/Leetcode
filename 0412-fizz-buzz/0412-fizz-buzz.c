/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) 
{
   char **res = malloc(n*sizeof(char*));
    for(int i=1; i<=n; i++)
    {
        if((i%3==0) && (i%5==0))
        res[i-1] = "FizzBuzz";
        else if(i%3==0)
        res[i-1] = "Fizz";
        else if(i%5==0)
        res[i-1] = "Buzz";
        else
        {
            res[i-1]=malloc(12*sizeof(char)); 
            sprintf(res[i-1],"%d",i); //convert int to string
        }
    }
    *returnSize=n; //total number of elements
    return res; //return char**
}