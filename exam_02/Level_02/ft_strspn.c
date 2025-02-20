#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t count = 0;
    while (*s)
    {
        while (accept[i] && accept[i] != *s)
            i++;
        if (accept[i] == '\0')
            return (count);
        s++;
        count++;
        i = 0;
    }
    return (count);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     const char *s = "hello world";
//     const char *accept = "hello";

//     size_t result = strspn(s, accept);

//     printf("%zu caracteres acceptes\n", result);
//     return 0;
// }