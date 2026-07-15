char* addBinary(char* a, char* b) 
{
    int i=strlen(a)-1; //pointer to last char of a
    int j=strlen(b)-1; //pointer to last char of b
    int carry=0;
    
    // res length can be most max length of a or b
    int maxLen = (i>j?i:j)+3; //+1 for carry, +1 for '\0', +1 for extra
    char *res = malloc(maxLen*sizeof(char));
    res[maxLen-1]='\0'; // puts null at the end
    int k = maxLen - 2; //k is index where we fill res from the back
    while(i>=0 || j>=0 || carry)
    {
        int sum = carry;
        if(i>=0)
        {
            sum+=a[i]-'0'; // convert char to int
            i--;
        }
        if(j>=0)
        {
            sum+=b[j]-'0'; //convert char to int
            j--;
        }
        res[k--] = (sum%2)+'0'; //convert int to char
        carry = sum/2;
    }
    return res + k + 1; // return address from where the actual res starts

}