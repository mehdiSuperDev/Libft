/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:43:55 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/15 12:09:37 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	end_of_dest;

	end_of_dest = ft_strlen(s1);
	while (n-- > 0 && *s2)
		s1[end_of_dest++] = *s2++;
	s1[end_of_dest] = '\0';
	return (s1);
}
