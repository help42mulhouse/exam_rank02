char *ft_strrev(char *str)
{
    int i = -1;
    int len = 0;
    char temp;
    while (str[len])
        len++;
    while (++i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return (str);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "hello";
//     printf("%s", ft_strrev(str));
//     return 0;
// }
