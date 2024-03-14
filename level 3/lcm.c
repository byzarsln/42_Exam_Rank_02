int is_prime(int nbr)
{
    int i = 2;

    if (nbr == 2)
        return (1);

    while(i < nbr)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return(1);
}


 unsigned int    lcm(unsigned int a, unsigned int b)
 {
    int i;
    unsigned int obeb = 1;

    i = 2;
    if(a == 0 | b == 0)
        return (0);
    if (a > b)
    {
        int tmp;
        tmp = 0;

        tmp = a;
        a = b;
        b = tmp;
    }
 
    while( i <= (a / 2) || (a < 4 && i <= a))
    {
        if (is_prime(i))
        {
            if (a % i == 0 && b % i == 0)
                obeb *= i;
        }
        i++;
    }
    return (obeb);
 }
