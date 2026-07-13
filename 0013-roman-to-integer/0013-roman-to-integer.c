int romanVal(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0;
    }
}

int romanToInt(char* s) {
    int i=0,result=0;
    while(s[i])
    {
        int curr = romanVal(s[i]);
        int next = romanVal(s[i+1]);
        if(curr<next)
        result-=curr;
        else
        result+=curr;

        i++;
    }
    return result;
}
