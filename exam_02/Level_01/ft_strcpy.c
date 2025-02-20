#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
    while (*s2)
        *s1++ = *s2++;
    *s1 = '\0';
    return (s1);
}

// int main()
// {
//     char s1[] = "s1";
//     char s2[] = "s2";

//     printf("s1 : %s\n", s1);
//     printf("s2 : %s\n", s2);
//     ft_strcpy(s1, s2);
//     printf("s1 : %s\n", s1);
//     printf("s2 : %s\n", s2);
//     return (0);
// }