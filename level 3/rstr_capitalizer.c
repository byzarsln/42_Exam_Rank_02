#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        int i;
        int j;

        i = 0;
        j = 1;
        while(argv[j])
        {
            i = 0;
            while(argv[j][i])
            {
                if (argv[j][i + 1] >= 9 && argv[j][i + 1] <= 32 || argv[j][i + i] == '\0')
                {
                    if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
                        argv[j][i] -= 32;
                    else
                        i++;
                }
                else if(argv[j][i] >= 'A' && argv[j][i] <= 'Z')
                    argv[j][i] += 32;
                i++;
            }
            j++;
        }
        i = 0;
        j = 1;
        while(argv[j])
        {
            i = 0;
            while(argv[j][i])
                write(1, &argv[j][i++], 1);
            write(1, "\n", 1);
            j++;
        }
    }
}