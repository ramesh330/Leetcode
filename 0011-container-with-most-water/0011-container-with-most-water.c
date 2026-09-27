int maxArea(int* height, int heightSize) 
{
    int w = 0,h = 0;  
    int i = 0,j = heightSize-1;
    int *start = height,*end = height;
    int max = 0;
    while(i<j)
    {
        h = (start[i] <= end[j]) ? start[i] : end[j];
        w = j - i;

        if(h * w > max)
        max = h * w;

        if(start[i] < end[j])
        i++;
        else if(end[j] < start[i])
        j--;
        else
        {
            i++; j--;
        }
    }
    return max;
}