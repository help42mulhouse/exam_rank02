unsigned char reverse_bits(unsigned char octet)
{
    unsigned char rev;
    int i = 8;
    while (i--)
    {
        rev = (rev << 1) | (octet & 1);
        octet >>= 1;
    }
    return(rev);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d", reverse_bits(2));
//     return (0);
// }
 