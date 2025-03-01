#include <unistd.h>

int ft_atoi(char *str)
{
    int n;
    while (*str)
    {
        n =  n * 10 + (*str - '0');
        str++;
    }
    return n;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if ( n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

int main(int argc, char **argv)
{
    int n;
    int i = 1;
    if (argc == 2)
    {
        n = ft_atoi(argv[1]);
        while (i <= 9 && n <= 238609183)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(n);
            write(1, " = ", 3);
            ft_putnbr(i * n);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return 0;
}