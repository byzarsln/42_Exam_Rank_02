#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while(s[i])
    {
        j = 0;
        while((s[i] != reject[j]) && reject[j])
            j++;
        if(s[i] == reject[j])
                return(i);
        i++;
    }
    return(i);
}
