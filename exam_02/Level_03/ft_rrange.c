#include <stdlib.h>

int ft_abs(int n)
{
    if (n < 0)
        return(-n);
    return(n);
}

int *ft_rrange(int start, int end)
{
    int len = ft_abs(end - start) + 1;
    int i = 0;
    int *tab = malloc(sizeof(int) * len);
    while(i < len)
    {
        tab[i] = end;
        if (end > start)
            end--;
        else
            end++;
        i++;
    }
    return(tab);
}
