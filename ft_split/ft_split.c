#include <stdlib.h>
#include <stdio.h>

int     ft_isdelimiter(char character)
{
    return (character == ' ' || character == '\n' || character == '\t');
}

int     del_strlen(char *str)
{
    int     count;

    count = 0;
    while (!ft_isdelimiter(str[count]) && str[count])
        count++;
    return (count);
}

int     count_words(char *str)
{
    int     count;
    int     i;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (i == 0 && !ft_isdelimiter(str[i]))
            count++;
        if (ft_isdelimiter(str[i]) && (!ft_isdelimiter(str[i + 1]) && str[i + 1]))
            count++;
        i++;
    }
    return (count);
}

int     **ft_split(char *str)
{
    char **output;

    output = malloc(count_words(str) + 1);
}

int main(void)
{
    printf("%d\n", del_strlen("helloo ll"));
    return (0);
}