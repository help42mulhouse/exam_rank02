int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int max = 0;
    max = tab[i];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return(max);
}


// #include <stdio.h>
// int main()
// {
//     int i[]= {1, 2, 3, 4};
//     printf("max : %d", max(i, 4));
//     return (0);
// }