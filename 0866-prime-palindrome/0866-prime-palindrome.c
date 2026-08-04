int primePalindrome(int n) 
{
    if(n==1 || n==2) return 2;
    while(n)
    {
        if(n%2==0){n++;continue;}
        int rev=0,temp=n,curr=n;
        while(curr>0)
        {
            rev = (curr%10) + (rev*10);
            curr/=10;
        }
        int flag=1;
        if(temp!=rev) {n++;continue;}
        for(int i=2; i*i<=temp; i++)
        {
            if(temp%i==0)
            {flag=0; break;}
        }
        if(flag) break; n++;
    }
    return n;
}