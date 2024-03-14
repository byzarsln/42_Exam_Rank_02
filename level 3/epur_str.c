#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int is_space;
        while (argv[1][i] >= 9 && argv[1][i] <= 32)
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] >= 9 && argv[1][i] <= 32)
                is_space = 1;
            if (!(argv[1][i] >= 9 && argv[1][i] <= 32))
            {
                if (is_space)
                    write(1, " ", 1);
                is_space = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }   
    }
    write(1, "\n", 1);
    return (0);
}

