#include <unistd.h>
#include <stdio.h>

char ft_putchar(char str, int i)
{
    while(i > 0)
    {
        write(1, &str, 1);
        i--;
    }
    return(str);
}

int main(int argc, char **argv)
{
    int i;
    i = 0;

    if(argc == 2)
    {
        while(argv[1][i])
        {
            if((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
            {
                int c = argv[1][i] - 'a' + 1;
                ft_putchar(argv[1][i], c);
            }
            else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                int d = argv[1][i] - 'A' + 1;
                ft_putchar(argv[1][i], d);
            }
            else
            {
                write(1,&argv[1][i], 1);
            }
            i++;

        }
    }
    write(1, "\n", 1);
}