#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t count = 0;
    while (*s)
    {
        while (reject[i] && reject[i] != *s)
            i++;
        if (reject[i] != '\0')
            return (count);
        s++;
        i = 0;
        count++;
    }
    return (count);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     const char *s = "hello world";
//     const char *reject = "vz";

//     size_t result = strcspn(s, reject);

//     printf("La première voyelle est trouvée à l'index : %zu\n", result);
//     return 0;
// }
