char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if(!s2)
        return((char *)s1);
    while(s1[i])
    {
        j = 0;
        while((s1[i] != s2[j]) && s2[j])
        {
            j++;
        }
        if(s1[i] == s2[j])
            return((char *)s1 + i);
        i++;
    }
    return(0);
}
