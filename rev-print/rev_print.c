/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 05:01:20 by agaladi           #+#    #+#             */
/*   Updated: 2024/02/16 06:33:56 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*rev_str(char *str)
{
	char	*output;
	char	tmp;
	int		length;
	int		i;

	length = ft_strlen(str);
	output = (char *)malloc((length * sizeof(char)) + 1);
	if (!output || 0 == length)
		return (NULL);
	i = 0;
	while (length)
		output[i++] = str[length-- - 1];
	output[i] = '\0';
	return (output);
}

int	main(int argc, char *argv[])
{
	if (2 != argc || 0 == ft_strlen(argv[1]))
		write(1, "\n", 1);
	else
		ft_putstr(rev_str(argv[1]));
	return (0);
}
