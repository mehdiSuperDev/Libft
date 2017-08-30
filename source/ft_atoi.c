/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:55:12 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/24 16:24:05 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	sign;
	int	value;

	value = 0;
	sign = 1;
	while (*str == '\t' || *str == ' ' || *str == '\n' || *str == '\f'
			|| *str == '\r' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = *str == '+' ? 1 : -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + ((int)*str - '0');
		str++;
	}
	return (value * sign);
}
