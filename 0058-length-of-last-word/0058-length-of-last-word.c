int lengthOfLastWord(char* s) {
    int count=0;
    while(s[count]) count++;
    count-=1;
    int k=0;
    while(count>=0 && s[count]==' ') count--;
    while(count>=0 && s[count]!=' '){
        k++;
        count--;
    }
    return k;
}