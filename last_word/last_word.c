#include <unistd.h>

int     ft_isspace(char character)
{
    return (character == ' ' || character == '\t');
}

int     ft_strlen(char *str)
{
    int     count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

void    ft_putstr(char *str)
{
    while (!ft_isspace(*str) && *str)
        write(1, str++, 1);
}

void    last_word(char *str)
{
    int     last_index;

    last_index = ft_strlen(str) - 1;
    while (ft_isspace(str[last_index]))
        last_index--;
    while (!ft_isspace(str[last_index]))
        last_index--;
    ft_putstr(str + last_index + 1);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        last_word(argv[1]);
    ft_putstr("\n");
    return (0);
}