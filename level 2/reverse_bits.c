
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char c;
    int i;

    i = 0;
    c = 0;
    while(i <= 7)
    {
        c = c << 1;
        c = c | (octet & 1);
        octet >>= 1;
        i++;
    }
    return (c);
}
