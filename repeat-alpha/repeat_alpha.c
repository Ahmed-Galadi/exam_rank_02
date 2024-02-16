/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 04:16:54 by agaladi           #+#    #+#             */
/*   Updated: 2024/02/16 04:18:34 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	repeat_char(char character, int count)
{
	while (count)
	{
		write(1, &character, 1);
		count--;
	}
}

int	calculate_rep(char character)
{
	if ((character >= 'A') && (character <= 'Z'))
		return ((int)character - 64);
	if ((character >= 'a') && (character <= 'z'))
		return ((int)character - 96);
	else
		return (1);
}

void	display_output(char *input)
{
	int		rep_count;
	int		i;

	i = 0;
	while (input[i])
	{
		rep_count = calculate_rep(input[i]);
		repeat_char(input[i], rep_count);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (2 != argc || 0 == ft_strlen(argv[1]))
		write(1, "\n", 1);
	else
		display_output(argv[1]);
	return (0);
}
