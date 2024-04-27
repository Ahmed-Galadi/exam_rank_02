
#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str2[j] == str1[i])
				return (str1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

void main(void)
{
    printf("%s",ft_strpbrk("ahmed", "em"));
}