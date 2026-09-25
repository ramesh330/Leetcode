bool isIsomorphic(char* s, char* t) 
{
    int a[256] = {0};
    int b[256] = {0};

    for(int i=0; s[i]!='\0'; i++)
    {
        if(a[s[i]]!=0 && a[s[i]]!=t[i])
        return false;
        if(b[t[i]]!=0 && b[t[i]]!=s[i])
        return false;

        a[s[i]] = t[i];
        b[t[i]] = s[i];
    }
    return true;
}