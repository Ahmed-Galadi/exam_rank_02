/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 06:31:28 by agaladi           #+#    #+#             */
/*   Updated: 2024/02/17 20:36:18 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	is_in_str(const char *str, char character)
{
	int		output;
	int		i;

	output = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == character)
			output = 1;
		i++;
	}
	return (output);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;
	int		i;

	count = 0;
	while (s[count])
	{
		if (!is_in_str(accept, s[count]))
			return (count);
		count++;
	}
	return (0);
}
