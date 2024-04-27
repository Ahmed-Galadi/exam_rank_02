#include <unistd.h>

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
    while (*str)
        write(1, str++, 1);
}

void    wdmatch(char *str1, char *str2)
{
    int     i;

    i = 0;
    while (i < ft_strlen(str1) && *str2)
    {
        if (str1[i] == *str2)
            i++;
        str2++;
    }
    if (i == ft_strlen(str1))
        ft_putstr(str1);
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    ft_putstr("\n");
    return (0);
}