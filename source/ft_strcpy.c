/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:48:14 by mraheemu          #+#    #+#             */
/*   Updated: 2016/04/20 17:32:45 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	char	*dest_cpy;

	dest_cpy = dst;
	while (*src)
		*dest_cpy++ = *src++;
	*dest_cpy = '\0';
	return (dst);
}
