int addDigits(int num) 
{
    add:
    int sum=0;
    while(num)
    {
        sum+=(num%10);
        num/=10;
    }
    if(sum<10) return sum;
    else num=sum;
    goto add;
}