
int		max(int* tab, unsigned int len)
{
    int i;
    int a;

    i = 0;

    if(!tab)
        return (0);
    a = tab[0];
    while(tab[i] && i < len)
    {
        if (tab[i] > a)
        {
            a = tab[i];
        }
        i++;
    }
    return (a);
}
