#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int argc)
{
    if (argc >= 0 && argc <= 9)
        ft_putchar(argc + '0');
    else
    {
        ft_putnbr(argc/ 10);
        ft_putnbr(argc % 10);
    }
}
int main(int argc, char ** argv)
{
    ft_putnbr(argc - 1);
    write(1, "\n", 1);
    return (0);
}