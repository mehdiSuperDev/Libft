/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:50:52 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/15 12:08:24 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b_ptr;

	b_ptr = (unsigned char *)b;
	while (len-- > 0)
		*b_ptr++ = (unsigned char)c;
	return (b);
}
