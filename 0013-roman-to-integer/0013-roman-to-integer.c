int roman(char c){
    switch(c){
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
        default : return 0;
    }
}

int romanToInt(char* s) {
    int curr=0,next=0,res=0;
    int i=0;
    while(s[i]){
        curr = roman(s[i]);
        next = roman(s[i+1]);
        if(curr>=next)
        res += curr;
        else 
        res -= curr;

        i++;
    }
    return res;
}