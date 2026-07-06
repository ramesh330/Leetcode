int firstUniqChar(char* s) 
{
    int ch[26] = {0};
    for(int i=0; s[i] != '\0'; i++)
    ch[s[i] - 'a']++;

    for(int i=0; s[i]!='\0'; i++)
    {
        if(ch[s[i] - 'a'] == 1)
        return i;
    }
    return -1;
}