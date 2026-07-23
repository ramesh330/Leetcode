int climbStairs(int n)
{
    // return directly if n is 1 or 2.
    if(n==1)return 1;
    if(n==2)return 2;

    int first = 2;
    int sec = 1;
    int curr;
    for(int i=3; i<=n; i++)
    {
        curr = first + sec;
        sec = first;
        first = curr;
    }
    return first;
}   