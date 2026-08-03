int diagonalSum(int** mat, int matSize, int* matColSize) 
{
    if(matSize==1) return mat[0][0];
    int sum = 0;
    for(int i=0; i<matSize; i++)
    for(int j=0; j<matSize; j++)
    {
        if(i==j || i==(matSize-j-1))
        sum+=mat[i][j];
    }
    return sum;
}