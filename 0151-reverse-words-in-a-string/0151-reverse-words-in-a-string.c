char* reverseWords(char* s) 
{
    int start = 0, end = strlen(s)-1;
    while(start<end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;end--;
    }

    int i=0,j;
    while(s[i])
    {
        if(s[i] == ' ' && (i == 0 || s[i+1] == ' ' || s[i+1] == '\0'))
        {
            j = i;

            while(s[j])
            {
                s[j] = s[j+1];
                j++;
            }
        }
        else
            i++;
    }

    start=0,end;
    for(int i=0; ; i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            end=i-1;
            while(start<end)
            {
                char temp2 = s[start];
                s[start] = s[end];
                s[end] = temp2;
                start++;end--;
            }
            if(s[i] == '\0')
            break;
            start=i+1;
        }
    }
    return s;
}