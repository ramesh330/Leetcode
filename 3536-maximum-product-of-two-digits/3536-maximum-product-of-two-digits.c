int maxProduct(int n) 
{
    int max=0;
    while(n)
    {
        int digit = n%10;
        int temp = n/10;
        while(temp)
        {
            if(digit * (temp%10) > max) max=digit * (temp%10);
            temp/=10;
        }
        n/=10;
    }
    return max;
}