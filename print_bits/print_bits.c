/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:32:16 by agaladi           #+#    #+#             */
/*   Updated: 2024/02/18 19:16:26 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit_holder;
	int				i;

	bit_holder = 0;
	i = 8;
	while (i--)
	{
		bit_holder = ((octet >> i) & 1) + '0';
		write(1, &bit_holder, 1);
		bit_holder = 0;
	}
}
