char* addString(char* num1, int m, char* num2, int n)
{
    int len = m>n?m:n;
    char *res = (char*)malloc((len+2)*sizeof(char));
    int sum=0,carry=0;
    m--; n--;
    res[len+1] = '\0';

    while(n!=-1)
    {
        sum = num1[m] + num2[n] + carry - 96;
        res[len--] = sum % 10 + 48;
        carry = sum / 10;
        m--;n--;
    }
    while(m!=-1)
    {
        sum = num1[m] + carry - 48;
        res[len--] = sum % 10 + 48;
        carry = sum/10;
        m--;
    }
    if(carry==0)
        return res+1;
    res[0] = '1';
    return res;
}


char* addStrings(char* num1, char* num2) 
{
    int m = strlen(num1);
    int n = strlen(num2);

    if(m>=n)
        return addString(num1,m,num2,n);
    return addString(num2,n,num1,m);
}