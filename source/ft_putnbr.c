/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 11:38:25 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/21 11:38:37 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	temp;
	int				size;

	size = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	temp = n;
	while ((temp /= 10) > 0)
	{
		size *= 10;
	}
	temp = n;
	while (size)
	{
		ft_putchar((temp / size) + 48);
		temp = temp % size;
		size = size / 10;
	}
}
