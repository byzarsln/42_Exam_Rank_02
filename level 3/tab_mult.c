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

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr >= 0 && nbr <= 9)
        ft_putchar(nbr + 48);
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nbr;
        int i;

        i = 1;
        nbr = ft_atoi(argv[1]);
        while(i < 10)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr((i * nbr));
            write(1, "\n", 1);
            i++;
        }
        return(0);
    }
    write(1, "\n", 1);
}