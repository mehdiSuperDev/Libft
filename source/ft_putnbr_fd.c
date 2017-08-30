/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 11:43:39 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/21 11:44:11 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	temp;
	int				size;

	size = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd((temp / size) + 48, fd);
		temp = temp % size;
		size = size / 10;
	}
}
