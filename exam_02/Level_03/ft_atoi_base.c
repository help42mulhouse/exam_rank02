int ft_atoi_base(const char *str, int str_base)
{
    int n = 0;
    int sign = 1;
    int i = 0;
    int c;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && '9')
            c = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            c = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            c = str[i] - 'A' + 10;
        else
            break;
        n = n * str_base + c;
        i++;
    }
    return (n * sign);
}