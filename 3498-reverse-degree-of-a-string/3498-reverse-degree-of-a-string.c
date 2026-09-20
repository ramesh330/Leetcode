int reverseDegree(char* s) 
{
    int res = 0;
    for(int i=0; s[i]!='\0'; i++)
        res = res + (123 - s[i]) * (i + 1);
    return res;
}