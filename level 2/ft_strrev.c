int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
        i++;
    return(i);
}

char    *ft_strrev(char *str)
{
    int i;
    int temp;
    int len;

    i = 0;
    len  = ft_strlen(str) - 1;

    while((i < ((len + 1) / 2)) && str[i])
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--; 
    }
    return(str);
}
