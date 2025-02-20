int ft_atoi(const char *str)
{
    int n = 0;
    int sign = 1;
    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str && (*str >= '0' && *str <= '9'))
    {
        n = n * 10 + (*str - '0');
        str++;
    }
    return (n * sign);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d", ft_atoi("    -1234bb"));
//     return(0);
// }