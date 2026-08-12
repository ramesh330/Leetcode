int hammingDistance(int x, int y) 
{
    int count = 0;
    for(int i=0; i<31; i++)
    if((x>>i&1) != (y>>i&1))
    count++;
    return count;
}