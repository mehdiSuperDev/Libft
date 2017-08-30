/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:47:23 by mraheemu          #+#    #+#             */
/*   Updated: 2016/04/20 17:40:12 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		length;
	char	*s2;
	char	*s2_cpy;

	length = ft_strlen(s1);
	s2 = NULL;
	s2 = (char *)malloc(sizeof(*s2) * length + 1);
	s2_cpy = s2;
	if (s2 != NULL)
	{
		while (*s1)
			*s2++ = *s1++;
		*s2 = '\0';
	}
	return (s2_cpy);
}
