int findComplement(int num) 
{
    int i;
    for(i=31; i>=0; i--)
    if(((unsigned)num>>i)&1U)
    break;

    unsigned int mask=(1U<<(i+1))-1;
    return (num ^ mask); 
}