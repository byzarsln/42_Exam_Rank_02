#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int space;
    char str[1000];

    i = 0;
    j = 0;
    space = 0;

    while(argv[1][i] >= 9 && argv[1][i] <= 32 && argv[1][i])
        i++;
    while(argv[1][i])
    {
        if(argv[1][i] >= 9 && argv[1][i] <= 32 && argv[1][i])
        {
            while(space < 3)
            {
                str[j++] = 32;
                space++;
            }
            space = 0;
            while(argv[1][i] >= 9 && argv[1][i] <= 32 && argv[1][i])
                i++;
        }
        str[j++] = argv[1][i++];
    }
    str[j] = '\n';
    j = 0;
    while(str[j])
        write(1, &str[j++], 1);
}