#include <unistd.h>

int main(int argc, char **argv)
{
    int i, j;
    unsigned char seen[256] = {0};
    if (argc == 3)
    {
        i = 0;
        while(argv[1][i])
        {
            if (!seen[(unsigned char)argv[1][i]])
            {
                write(1, &argv[1][i], 1);
                seen[(unsigned char)argv[1][i]] = 1;
            }
            i++;
        }
        j = 0;
        while(argv[2][j])
        {
            if (!seen[(unsigned char)argv[2][j]])
            {
                write(1, &argv[2][j], 1);
                seen[(unsigned char)argv[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return(0);
}