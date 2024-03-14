#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!accept)
        return (0);
    while (s[i])
    {
        j = 0;
        while(s[i] != accept[j] && accept[j])
            j++;
        if (s[i] != accept[j])
            return (i);
        i++;
    }
    return (i);
}

#include <stdio.h>
int main()
{
    char str[] = "beyza";
    char str1[] = "zbaye";
    printf("%zu", ft_strspn(str, str1));
}