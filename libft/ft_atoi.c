/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:05:27 by gbertass          #+#    #+#             */
/*   Updated: 2023/04/20 15:14:50 by gbertass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb_result;
	int	signal;

	signal = 1;
	i = 0;
	nb_result = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
				i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-' )
		{
		signal = signal * -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb_result = (nb_result) * 10 + nptr[i] - 48;
		i++;
	}
	nb_result = nb_result * signal;
	return (nb_result);
}
