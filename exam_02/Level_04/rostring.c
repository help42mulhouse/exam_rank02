#include <unistd.h>

int write_word(char *line, int index)
{
    int count = 0;
    char *start = line + index;

    while (*start && *start != ' ' && *start != '\t')
    {
        write(1, start, 1);
        start++;
        count++;
    }

    return count;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    if (argc > 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
        return 0;
    }

    char *str = argv[1];
    int index = 0;
    int first_word_stat;
    int first_word = 1;

    while (str[index] == ' ' || str[index] == '\t')
        index++;
    
    first_word_stat = index;

    while (str[index] && str[index] != ' ' && str[index] != '\t')
        index++;

    while (str[index])
    {
        while (str[index] == ' ' || str[index] == '\t')
            index++;

        if (str[index] == '\0')
            break;

        if (!first_word)
            write(1, " ", 1);
        else
            first_word = 0;

        int written = write_word(str, index);
        index += written;
    }
    if (!first_word)
        write(1, " ", 1);
    write_word(argv[1], first_word_stat);

    write(1, "\n", 1);
    return 0;
}
