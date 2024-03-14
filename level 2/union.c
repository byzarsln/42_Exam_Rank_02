#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i;
        int j;
        int counter;
        char str[1000];

        i = 0;
        j = 0;
        counter = 0;

        while(argv[1][i])
        {
            while(argv[1][i] != str[j] && str[j])
                j++;
            if(argv[1][i] != str[j])
            {
                str[counter] = argv[1][i];
                write(1, &str[counter], 1);
                counter++;
            }
            j = 0;
            i++;
        }
        i = 0;
        j = 0;
        while(argv[2][i])
        {
            while(argv[2][i] != str[j] && str[j])
                j++;
            if(argv[2][i] != str[j])
            {
                str[counter] = argv[2][i];
                write(1, &str[counter],1);
                counter++;
            }
            j = 0;
            i++;
        }
        str[counter] = '\0';
    }
    write(1, "\n", 1);
}