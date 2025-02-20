#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    int len = 0;
    int i = 0;
    while(src[len])
        len++;
    char *dup = malloc(len + 1);
    if (!dup)
        return (NULL);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

// int main()
// {
//     char *str = ft_strdup("hello");
//     printf("%s", str);
//     free(str);
//     return (0);
// }
