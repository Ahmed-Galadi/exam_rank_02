/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:07:10 by agaladi           #+#    #+#             */
/*   Updated: 2024/02/17 05:31:08 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	calc_output(char *arg1, char *arg2, char *arg3)
{
	int		a;
	int		b;
	char	operator;

	a = atoi(arg1);
	b = atoi(arg3);
	operator = arg2[0];
	if (operator == '+')
		return (a + b);
	if (operator == '-')
		return (a - b);
	if (operator == '*')
		return (a * b);
	if (operator == '/')
		return (a / b);
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	if (4 != argc)
		write(1, "\n", 1);
	else
		printf("%d\n", calc_output(argv[1], argv[2], argv[3]));
	return (0);
}
