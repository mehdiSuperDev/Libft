/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 15:39:00 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/24 17:44:58 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size_integer(unsigned int n)
{
	int size;

	size = 0;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void		fs(unsigned int n, char *str, int sign, unsigned int size)
{
	int i;

	i = 0;
	if (sign)
		str[i++] = '-';
	while (size)
	{
		str[i] = (n / size) + '0';
		n %= size;
		size /= 10;
		i++;
	}
	str[i] = '\0';
}

char			*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;
	int				sign;
	unsigned int	nbr;
	unsigned int	temp;

	str = NULL;
	size = 1;
	sign = n < 0;
	nbr = sign ? -n : n;
	temp = nbr;
	while ((temp /= 10) > 0)
		size *= 10;
	n = ft_size_integer(size);
	if ((str = (char *)malloc(sizeof(char) * (n + sign + 1))))
		fs(nbr, str, sign, size);
	return (str);
}
