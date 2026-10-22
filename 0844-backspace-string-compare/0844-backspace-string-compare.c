void check(char *s,char *a)
{
    int top = -1;

    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] == '#')
        {
            if(top >= 0)
            top--;
        }
        else
        a[++top] = s[i];
    }
    a[top+1] = '\0';
}

bool backspaceCompare(char* s, char* t) 
{
    char a[1001];
    char b[1001];

    check(s,a);
    check(t,b);
    return strcmp(a,b) == 0;
}