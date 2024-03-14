#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int c;

    if(argc == 4)
    {
        if(argv[2][0] == '+')
        {
            c = atoi(argv[1]) + atoi(argv[3]);
            printf("%d", c);
        }
        else if(argv[2][0] == '-')
        {
            c = atoi(argv[1]) - atoi(argv[3]);
            printf("%d", c);
        }
        else if(argv[2][0] == '*')
        {
            c = (atoi(argv[1]) * atoi(argv[3]));
            printf("%d", c);
        }
        else if(argv[2][0] == '%')
        {
            c = atoi(argv[1]) % atoi(argv[3]);
            printf("%d", c);
        }
        else if(argv[2][0] == '/')
        {
            c = atoi(argv[1]) / atoi(argv[3]);
            printf("%d", c);
        }
    }
    write(1, "\n", 1);
}