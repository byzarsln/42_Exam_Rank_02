#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int a)
{
    int n;
    n = a; 
    if (a > 9)
    {
        ft_putnbr (a / 10);
        ft_putnbr(a % 10);
    }
    else
    {
        ft_putchar(a + '0');
    }
}

int ft_atoi(char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while(str[i])
    {
        if(str[i] == '-')
            return (0);
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return(result);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;
        int a;
        int k;
        int result;

        i = 3;
        a = ft_atoi(argv[1]);
        result = 2;

        if (a < 2)
            write(1, "0", 1);
        if(a == 2)
            write(1, "2", 1);

        while(i <= a)
        {
            k = 2;
            while(i % k != 0)
            {
                if(k == (i - 1))
                {
                    result += i;
                }
                k++;
            }
            i++;
        }
        ft_putnbr(result);
    }
    write(1, "\n", 1);
}