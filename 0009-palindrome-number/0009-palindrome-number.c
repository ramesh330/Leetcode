#include<stdio.h>
bool isPalindrome(int x)
{
    long int temp,rem,rev = 0;
    temp = x;
    while(x > 0){
        rem = x % 10;
        rev = rem + (rev * 10);
        x = x / 10;
    }
    if(temp == rev)
       return true;
    else
        return false;
}