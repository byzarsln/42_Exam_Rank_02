#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i;
        int j;

        i = 0;
        j = 0;
        while(argv[1][i])
        {
            while(argv[1][i] != argv[2][j] && argv[2][j])
                j++;
            if(argv[1][i] == argv[2][j])
            {
                if(argv[1][i + 1] == '\0')
                {
                    write(1, "1", 1);
                }
                j++;
            }
            else
            {
                write(1, "0", 1);
                break;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}