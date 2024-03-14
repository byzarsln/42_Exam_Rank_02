
int power(int base, int len)
{
    int pow;
    pow = 1;
    while(len > 0)
    {
        pow *= base;
        len--;
    }
    return(pow);
}
int	ft_atoi_base2(const char *str, int str_base)
{
    char *base;
    int i;
    int j;
    int len;
    int sign;
    int result;

    base = "0123456789abcdef";
    i = 0;
    j = 0;
    len = 0;
    result = 0;
    sign = 1;

    if(!str)
        return(0);
    if(str_base > 16 || str_base < 0)
        return (0);
    while(str[len])
        len++;
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
        len--;
    }
    len--;
    while(str[i])
    {
        j = 0;
        while(((str[i] != base[j]) && (str[i] != base[j] - 32)) && base[j])
            j++;
        if(str[i] == base[j] || (str[i] == base[j] - 32))
        {
            result += (j * power(str_base, len));
            len--;
        }
        i++;
    }
    return (result * sign);
}
