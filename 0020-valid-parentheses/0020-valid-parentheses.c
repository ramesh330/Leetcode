bool isValid(char* s) {
    char flag[10000];
    int k=-1;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        flag[++k] = s[i];

        else
        {
            if(k==-1) return false;

            if(s[i]==')' && flag[k]!='(')
            return false;

            if(s[i]==']' && flag[k]!='[')
            return false;

            if(s[i]=='}' && flag[k]!='{')
            return false;

            k--;
        }
    }
    return k == -1;
}