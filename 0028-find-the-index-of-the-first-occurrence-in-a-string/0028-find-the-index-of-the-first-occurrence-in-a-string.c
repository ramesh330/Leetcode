int strStr(char* haystack, char* needle) {
    int h_length = strlen(haystack);
    int n_length = strlen(needle);
    //if needle is empty it return 0
    if(n_length==0)
    return 0;
    for(int i=0; i<=h_length-n_length; i++)
    {
        //strncmp compare the chars n_length from position i 
        if(strncmp(haystack + i,needle,n_length)==0)
        return i;
    }
    return -1;
}