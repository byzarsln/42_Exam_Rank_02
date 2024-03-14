#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while(str[i])
        result = (result * 10) + (str[i++] - 48);
    return (result);
}

void ft_hex (int nbr)
{
    char *base;
    base = "0123456789abcdef";

    if (nbr >= 16)
        ft_hex(nbr / 16);
    write(1, &base[nbr % 16], 1);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int a;

        a = ft_atoi(argv[1]);
        ft_hex(a); 
    }
    write(1, "\n", 1);
    return (0);
}