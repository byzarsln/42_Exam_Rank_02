#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i;
    int *arr;

    i = 0;
    if(end  > start)
        arr = malloc(sizeof(int) * (end - start + 1));
    else
        arr = malloc(sizeof(int) * (start - end + 1));
    if(!arr)
        return(0);
    if(end >= start)
    {
       while(end >= start)
       {
        arr[i] = end;
        end--; 
        i++;
       }
    }
    else
    {
        while(start >= end)
       {
        arr[i] = end;
        end++; 
        i++;
       }
    }
    return(arr);
}
