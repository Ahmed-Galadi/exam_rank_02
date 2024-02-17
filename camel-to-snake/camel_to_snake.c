/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 03:19:47 by agaladi           #+#    #+#             */
/*   Updated: 2024/02/17 20:57:54 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	output_len(char *str)
{
	size_t	count;

	count = 1;
	while (str[count])
	{
		if ((str[count] >= 'A') && (str[count] <= 'Z'))
			count++;
		count++;
	}
	return (count);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*camel_to_snake(char *str)
{
	char	*output;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	output = (char *)malloc(output_len(str) * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && 0 != i)
		{
			output[j++] = '_';
			output[j++] = str[i++] + 32;
		}
		else
			output[j++] = str[i++];
	}
	output[j] = '\0';
	return (output);
}

void	display_output(char *str)
{
	char	*output;

	if (!str)
		return ;
	output = camel_to_snake(str);
	if (!output)
		return ;
	ft_putstr(output);
	free(output);
}

int	main(int argc, char *argv[])
{
	if (2 != argc)
		write(1, "\n", 1);
	else
		display_output(argv[1]);
	return (0);
}
