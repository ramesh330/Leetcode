int smallestNumber(int n, int t) 
{
    lable:
    int res=1;
    int temp = n;
    while(n)
    {
        res = (n%10) *res;
        n/=10;
    }
    if(res%t==0)
    return temp;
    n = temp + 1;
    goto lable;
}