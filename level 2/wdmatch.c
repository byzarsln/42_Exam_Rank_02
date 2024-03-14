#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;

    if (argc == 3)
    {
         while(argv[1][i])
         {
            while (argv[1][i] != argv[2][j] && argv[2][j])
                j++;
            if( argv[1][i] == argv[2][j])
            {

                j++;
                i++;
                if( argv[1][i] == '\0')
                {
                    while(k < i)
                    {
                        write(1, &argv[1][k], 1);
                        k++;
                    }
                }
            }
            else
                break;
         }
    }
    write(1, "\n", 1);
}