char* toHex(int num) 
{
    char *res = (char*)malloc(9);
    char hexa[] = "0123456789abcdef";
    unsigned int n = num;
    int i=0;
    if(n==0)
    {
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    while(n)
    {
        res[i++] = hexa[n%16];
        n/=16;
    }
    res[i] = '\0';
    int start =0,end=i-1;
    while(start<end)
    {
        char temp = res[start];
        res[start] = res[end];
        res[end] = temp;
        start++;end--;
    }
    return res;
}