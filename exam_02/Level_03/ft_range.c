#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = abs(end - start);
    int *tab = malloc(sizeof(int) * len + 1);
    while(i < len)
    {
        if (start < end)
        {
            tab[i] = start;
            start++;
            i++;
        }
        else
        {
            tab[i] = start;
            start--;
            i++;
        }
    }
    return (tab);
}