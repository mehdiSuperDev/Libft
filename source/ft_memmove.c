/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:51:23 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/15 13:35:53 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len > 0)
		{
			ft_memcpy(dst + len - 1, src + len - 1, 1);
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
