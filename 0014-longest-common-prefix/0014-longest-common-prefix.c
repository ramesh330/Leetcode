char* longestCommonPrefix(char** strs, int strsSize)
{
    int i=0;
    while(strs[0][i])
    {
        for(int j=1; j<strsSize; j++)
        {
            if(strs[j][i] != strs[0][i])
            {
                char *res = malloc(i+1);
                for(int k=0; k<i; k++)
                res[k] = strs[0][k];

                res[i] = '\0';
                return res;
            }
        }
        i++;
    }
    char *res = malloc(i+1);
    for(int k=0; k<i; k++)
    res[k] = strs[0][k];

    res[i] = '\0';
    return res;
}