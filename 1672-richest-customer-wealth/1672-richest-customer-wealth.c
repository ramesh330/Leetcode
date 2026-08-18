int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
    int sum,max=0;
    for(int i=0; i<accountsSize; i++)
    {
        sum=0;
        for(int j=0; j<accountsColSize[0]; j++)
        sum += accounts[i][j];

        if(sum>max) max = sum;
    }
    return max;
}