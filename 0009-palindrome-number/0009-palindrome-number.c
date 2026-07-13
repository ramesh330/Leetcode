bool isPalindrome(int x) {
    long long int res=0;
    long long int temp=x;
    while(x>0){
        res = (x%10) + (res*10);
        x/=10;
    }
    if(temp==res) return true;
    else return false;
}