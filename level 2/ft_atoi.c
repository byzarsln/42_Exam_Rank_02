
int	ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;
    i = 0;
    sign = 1;
    result = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - 48) + (result * 10);
        i++;
    }
    return(sign*result);
}
