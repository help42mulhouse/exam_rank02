#include <unistd.h>

void ft_strcapitalize(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    write (1, &str[i], 1);
    while (str[++i])
    {
        if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] >= 'a' && str[i+1] <= 'z'))
            str[i+1] -= 32;
        write(1, &str[i], 1);
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        while (i <argc)
        {
            ft_strcapitalize(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return(0);
}