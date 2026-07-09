int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    int f=0,s=1,t=0;
    for(int i=2; i<=n; i++)
    {
        t=f+s;
        f=s;
        s=t;
    }
    return t;
}