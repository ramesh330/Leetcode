bool findRotation(int** mat, int matSize, int* matColSize, int** target, int targetSize, int* targetColSize) 
{
    int flag=0;
    for(int i=0; i<matSize; i++)
    for(int j=0; j<matColSize[0]; j++)
    if(mat[i][j] != target[i][j])
    {
        flag=1;
        break;
    }
    if(flag==0) return true;

    for(int count=0; count<3; count++)
    {
        for(int i=0; i<matSize; i++)
        for(int j=i+1; j<matColSize[0]; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }

        for(int i=0; i<matSize; i++)
        for(int j=0; j<matColSize[0]/2; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][matColSize[0]-j-1];
            mat[i][matColSize[0]-j-1] = temp;
        }

        flag=0;
        for(int i=0; i<matSize; i++)
        for(int j=0; j<matColSize[0]; j++)
        if(mat[i][j] != target[i][j])
        {
            flag=1;
            break;
        }

        if(flag==0)
        return true;
    }
    return false;
}