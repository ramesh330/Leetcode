char findTheDifference(char* s, char* t) 
{
    if(strlen(s)>=strlen(t))
    return '\0';
    
    int arr[26]={0};
    for(int i=0; s[i]!='\0'; i++)
    arr[s[i]-'a']++;

    for(int i=0; t[i]!='\0'; i++)
    {
        if(arr[t[i]-'a'] == 0)
        return t[i];
        else arr[t[i]-'a']--;
    }
    return '\0';
}
    