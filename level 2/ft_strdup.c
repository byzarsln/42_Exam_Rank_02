#include <stdlib.h>

int ft_strlen(char *arr)
{
    int i ;
    i = 0;
    while(arr[i])
        i++;
    return(i);
}

char    *ft_strdup(char *src)
{
    int i;
    int len;
    char *str;
    len  = ft_strlen(src);

    i = 0;

    str = malloc(sizeof(char *) * len + 1);
    if(!str)
        free;
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}
