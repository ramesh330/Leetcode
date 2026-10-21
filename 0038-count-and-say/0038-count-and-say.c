char* countAndSay(int n) {
    int count =0;
    char* ans=malloc(sizeof(char)*5000);
    ans[0]='1';
    ans[1]='\0';
    char next[5000];
    int nlen=0;
    int j;
    char cur;
    for(int i=1;i<n;i++){
        nlen=0;
        j=0;
        count=1;
        cur=ans[0];
        while(ans[j]!='\0'){
            j++;
            if(ans[j]==cur){
                count++;
            }else{
                next[nlen]=count+'0';
                next[nlen+1]=cur;
                nlen+=2;
                count=1;
                cur=ans[j];
            }
        }
        for(j=0;j<nlen;j++){
            ans[j]=next[j];
        }
        ans[j]='\0';
    }
    return ans;
}