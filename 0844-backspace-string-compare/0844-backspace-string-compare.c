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

    int topA = -1;
    int topB = -1;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] == '#')
        {
            if(topA >= 0)
            topA--;
        }
        else
        a[++topA] = s[i];
    }
    a[topA+1] = '\0';

    for(int i=0; t[i]!='\0'; i++)
    {
        if(t[i] == '#')
        {
            if(topB >= 0)
            topB--;
        }
        else
        b[++topB] = t[i];
    }
    b[topB+1] = '\0';

    return strcmp(a,b) == 0;
}