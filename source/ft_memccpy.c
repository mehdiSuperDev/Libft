/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:52:30 by mraheemu          #+#    #+#             */
/*   Updated: 2016/04/20 17:34:50 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_cast;
	unsigned char	*src_cast;

	dst_cast = (unsigned char *)dst;
	src_cast = (unsigned char *)src;
	while (n-- > 0 && *src_cast != (unsigned char)c)
		*dst_cast++ = *src_cast++;
	if (*src_cast == (unsigned char)c)
	{
		*dst_cast = *src_cast;
		return ((void *)(dst_cast + 1));
	}
	return (NULL);
}
