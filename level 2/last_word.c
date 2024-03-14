#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int len;

    i = 0;
    len = 0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            len++;
            i++;         
        }
        len--;
        while(argv[1][len] >= 9 && argv[1][len] <= 32)
        {
                len--;
            if (len == -1)
                break ;
            i = len;
        }
        while(!(argv[1][i] >= 9 && argv[1][i] <= 32))
            i--;
        i++;
        while(i <= len)
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}