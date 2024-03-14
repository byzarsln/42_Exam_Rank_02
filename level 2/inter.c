#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int counter;
    char str[1000];

    i = 0;
    j = 0;
    k = 0;
    if (argc == 3)
    {
        while(argv[1][i])
        {
            j = 0;
            while(argv[1][i] != argv[2][j] && argv[2][j])
                j++;
            if(argv[1][i] == argv[2][j])
            {
                while(argv[1][i] != str[k] && str[k])
                    k++;
                if(argv[1][i] != str[k])
                {
                    str[counter] = argv[1][i];
                    write(1, &str[counter], 1);
                    counter++;
                }
                k = 0;
            }
            i++;
        }
        str[counter] = '\0';
    }
    write(1, "\n", 1);
}