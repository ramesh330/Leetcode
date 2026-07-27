int countPrimeSetBits(int left, int right) 
{
    int count,pcount=0,flag;
    for(int i=left; i<=right; i++)
    {
        flag=1;
        count=0;
        for(int j=0; j<32; j++)
        if((i>>j)&1) count++;

        if(count < 2) flag = 0;    
        else 
        {
            for(int k=2; k*k<=count; k++){
                if(count%k==0)
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag) pcount++;
    }
    return pcount;
}