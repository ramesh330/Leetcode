char* countAndSay(int n)
{
    char *result = malloc(5000);
    char *next = malloc(5000);

    strcpy(result, "1");

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        int k = 0;

        while (result[j] != '\0')
        {
            char digit = result[j];
            int count = 0;

            while (result[j] != '\0' && result[j] == digit)
            {
                count++;
                j++;
            }

            k += sprintf(&next[k], "%d%c", count, digit);
        }

        next[k] = '\0';

        strcpy(result, next);
    }

    free(next);

    return result;
}