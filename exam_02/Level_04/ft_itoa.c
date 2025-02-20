#include <stdlib.h>

int ft_len(int n)
{
    int len = 0;
    if(n <= 0)
        len++;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}

char *ft_itoa(int n)
{
    int sign = 1;
    int len = ft_len(n);
    char *result = malloc(len + 1);
    if (!result)
        return (NULL);
    result[len] = '\0';
    if (n == 0)
        result[0] = '0';
    if (n < 0)
    {
        sign = -1;
        result[0] = '-';
    }
    while (n != 0)
    {
        result[--len] = (n % 10) * sign + '0';
        n /= 10;
    }
    return (result);
}
// #include <stdio.h>
// int main()
// {
//     printf("%s", ft_itoa(-55));
//     return (0);
// }