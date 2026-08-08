int lengthOfLongestSubstring(char* s) 
{
    int maxLen=0,start=0;
    int last[256];
    for (int i = 0; i < 256; i++) 
        last[i] = -1; 
 
    for (int i = 0; s[i] != '\0'; i++)  
    { 
        if (last[s[i]] >= start) 
            start = last[s[i]] + 1; 
 
        last[s[i]] = i; 
 
        if (i - start + 1 > maxLen) 
            maxLen = i - start + 1; 
    } 
    return  maxLen;
}