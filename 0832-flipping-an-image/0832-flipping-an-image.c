/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) 
{
    int **arr = malloc(imageSize*sizeof(int *));
    for(int i=0; i<imageSize; i++)
    arr[i] = malloc(imageSize*sizeof(int));

    for(int i=0; i<imageSize; i++)
    for(int j=0; j<(imageSize/2); j++)
    {
        int temp = image[i][j];
        image[i][j] = image[i][imageSize-j-1];
        image[i][imageSize-j-1] = temp;
    }

    for(int i=0; i<imageSize; i++)
    for(int j=0; j<imageSize; j++)
    {
        arr[i][j] = image[i][j] ^ 1;
    }

    *returnColumnSizes = malloc(imageSize*sizeof(int));
    for(int i=0; i<imageSize; i++)
    (*returnColumnSizes)[i] = imageSize;

    *returnSize = imageSize;
    return arr;
}