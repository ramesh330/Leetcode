/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) 
{
    int *res = malloc(2*sizeof(int));
    *returnSize = 2;

    int w = (int)sqrt((double)area);
    while(area%w!=0)
    w--;

    int l=area/w;
    res[0]=l;
    res[1]=w;
    return res;
}