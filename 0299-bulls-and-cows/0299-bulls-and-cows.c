char* getHint(char* secret, char* guess) 
{
    int i=0,bulls=0,cows=0;
    int count1[10] ={0};
    int count2[10] ={0};
    while(secret[i])
    {
        if(secret[i] == guess[i])
        bulls++;
        else
        {
            count1[secret[i]-'0']++;
            count2[guess[i]-'0']++;
        }
        i++;
    }

    for(int i=0; i<10; i++)
    {
        if(count1[i] < count2[i])
        cows+=count1[i];
        else
        cows+=count2[i];
    } 

    char *res = malloc(20);
    sprintf(res, "%dA%dB", bulls, cows);
    return res;
}