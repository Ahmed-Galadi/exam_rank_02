/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 05:50:25 by agaladi           #+#    #+#             */
/*   Updated: 2024/02/16 21:41:12 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

size_t	ft_strlen(char *str)
{
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	input_ok(char *arg1, char *arg2, char *arg3)
{
	return ((0 < ft_strlen(arg1))
		&& (1 == ft_strlen(arg2))
		&& (1 == ft_strlen(arg3)));
}

void	display_output(char *arg1, char *arg2, char *arg3)
{
	int		i;

	i = 0;
	while (arg1[i])
	{
		if (arg1[i] == arg2[0])
			ft_putchar(arg3[0]);
		else
			ft_putchar(arg1[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (4 != argc || !input_ok(argv[1], argv[2], argv[3]))
		write(1, "\n", 1);
	else
		display_output(argv[1], argv[2], argv[3]);
	return (0);
}
