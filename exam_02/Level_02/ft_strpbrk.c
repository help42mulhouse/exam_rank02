 #include <string.h>
 
 char *ft_strpbrk(const char *s, const char *accept)
{
    int i = 0;
    while (*s)
    {
        i = 0;
        while (accept[i])
        {
            if (accept[i] == *s)
                return ((char*)s);
            i++;
        }
        s++;
    }
    return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     const char *s = "hello";
//     const char *accept = "aeiou";
//     char *result = ft_strpbrk(s, accept);
//     printf("%c", *result);
//     return (0);
// }